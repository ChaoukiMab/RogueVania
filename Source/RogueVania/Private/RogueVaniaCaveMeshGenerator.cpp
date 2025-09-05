#include "RogueVaniaCaveMeshGenerator.h"


URogueVaniaCaveMeshGenerator::URogueVaniaCaveMeshGenerator()
{
	// default values 
}

// Helper function implementations
FIntVector URogueVaniaCaveMeshGenerator::WorldToGrid(const FVector& WorldPos, float VoxelSize, const FVector& GridOrigin)
{
	FVector RelativePos = WorldPos - GridOrigin;
	return FIntVector(
		FMath::FloorToInt(RelativePos.X / VoxelSize),
		FMath::FloorToInt(RelativePos.Y / VoxelSize),
		FMath::FloorToInt(RelativePos.Z / VoxelSize)
	);
}

FVector URogueVaniaCaveMeshGenerator::GridToWorld(const FIntVector& GridPos, float VoxelSize, const FVector& GridOrigin)
{
	return GridOrigin + FVector(
		GridPos.X * VoxelSize,
		GridPos.Y * VoxelSize,
		GridPos.Z * VoxelSize
	);
}

bool URogueVaniaCaveMeshGenerator::IsValidGridPosition(const FIntVector& GridPos, const FIntVector& GridDimensions)
{
	return GridPos.X >= 0 && GridPos.X < GridDimensions.X &&
		GridPos.Y >= 0 && GridPos.Y < GridDimensions.Y &&
		GridPos.Z >= 0 && GridPos.Z < GridDimensions.Z;
}

UStaticMesh* URogueVaniaCaveMeshGenerator::GenerateCaveMeshFromPoints(
	const TArray<FPCGPoint>& RoomPoints,
	const TArray<FPCGPoint>& TunnelPoints,
	float VoxelSize,
	float SmoothingIterations)
{
	UE_LOG(LogTemp, Warning, TEXT("Generating cave mesh from %d rooms and %d tunnels"),
		RoomPoints.Num(), TunnelPoints.Num());

	// Calculate bounding box for all points
	FVector MinBounds = FVector(FLT_MAX);
	FVector MaxBounds = FVector(-FLT_MAX);

	// Process room points
	for (const FPCGPoint& Point : RoomPoints)
	{
		FVector Pos = Point.Transform.GetLocation();
		FVector Extents = Point.GetExtents();
		MinBounds = FVector::Min(MinBounds, Pos - Extents);
		MaxBounds = FVector::Max(MaxBounds, Pos + Extents);
	}

	// Process tunnel points
	for (const FPCGPoint& Point : TunnelPoints)
	{
		FVector Pos = Point.Transform.GetLocation();
		FVector Extents = Point.GetExtents();
		MinBounds = FVector::Min(MinBounds, Pos - Extents);
		MaxBounds = FVector::Max(MaxBounds, Pos + Extents);
	}

	// Add padding around the cave
	FVector Padding = FVector(VoxelSize * 5);
	MinBounds -= Padding;
	MaxBounds += Padding;

	// Calculate grid dimensions
	FVector GridSize = MaxBounds - MinBounds;
	FIntVector GridDimensions = FIntVector(
		FMath::CeilToInt(GridSize.X / VoxelSize),
		FMath::CeilToInt(GridSize.Y / VoxelSize),
		FMath::CeilToInt(GridSize.Z / VoxelSize)
	);

	UE_LOG(LogTemp, Warning, TEXT("Grid dimensions: %d x %d x %d"),
		GridDimensions.X, GridDimensions.Y, GridDimensions.Z);

	// Initialize voxel grid (1.0 = solid, 0.0 = empty)
	TArray<float> VoxelGrid;
	int32 TotalVoxels = GridDimensions.X * GridDimensions.Y * GridDimensions.Z;
	VoxelGrid.SetNum(TotalVoxels);

	// Fill with solid initially
	for (int32 i = 0; i < VoxelGrid.Num(); i++)
	{
		VoxelGrid[i] = 1.0f;
	}

	// Carve out rooms
	for (const FPCGPoint& RoomPoint : RoomPoints)
	{
		GenerateRoomCavity(VoxelGrid, RoomPoint, VoxelSize, GridDimensions, MinBounds);
	}

	// Carve out tunnels
	if (TunnelPoints.Num() > 0)
	{
		GenerateTunnelCavity(VoxelGrid, TunnelPoints, VoxelSize, GridDimensions, MinBounds);
	}

	// Smooth the cave
	SmoothCaveMesh(VoxelGrid, GridDimensions, SmoothingIterations);

	// Generate mesh from voxels
	UStaticMesh* CaveMesh = NewObject<UStaticMesh>();
	GenerateMeshFromVoxels(VoxelGrid, GridDimensions, CaveMesh);

	UE_LOG(LogTemp, Warning, TEXT("Cave mesh generation completed"));
	return CaveMesh;
}

void URogueVaniaCaveMeshGenerator::GenerateRoomCavity(
	TArray<float>& VoxelGrid,
	const FPCGPoint& RoomPoint,
	float VoxelSize,
	FIntVector GridDimensions,
	const FVector& GridOrigin)
{
	FVector RoomCenter = RoomPoint.Transform.GetLocation();
	FVector RoomExtents = RoomPoint.GetExtents();

	// Create organic room shape using multiple spheres
	int32 NumSpheres = FMath::RandRange(3, 7);

	for (int32 i = 0; i < NumSpheres; i++)
	{
		// Random offset within room bounds
		FVector SphereCenter = RoomCenter + FVector(
			FMath::RandRange(-RoomExtents.X * 0.3f, RoomExtents.X * 0.3f),
			FMath::RandRange(-RoomExtents.Y * 0.3f, RoomExtents.Y * 0.3f),
			FMath::RandRange(-RoomExtents.Z * 0.3f, RoomExtents.Z * 0.3f)
		);

		float SphereRadius = FMath::RandRange(RoomExtents.GetMin() * 0.4f, RoomExtents.GetMin() * 0.8f);

		// Carve sphere
		FIntVector GridCenter = WorldToGrid(SphereCenter, VoxelSize, GridOrigin);
		int32 GridRadius = FMath::CeilToInt(SphereRadius / VoxelSize);

		for (int32 x = -GridRadius; x <= GridRadius; x++)
		{
			for (int32 y = -GridRadius; y <= GridRadius; y++)
			{
				for (int32 z = -GridRadius; z <= GridRadius; z++)
				{
					FIntVector GridPos = GridCenter + FIntVector(x, y, z);

					if (IsValidGridPosition(GridPos, GridDimensions))
					{
						float Distance = FVector(x, y, z).Size();
						if (Distance <= GridRadius)
						{
							int32 Index = GridPos.X + GridPos.Y * GridDimensions.X + GridPos.Z * GridDimensions.X * GridDimensions.Y;

							// Smooth falloff for organic look
							float Alpha = FMath::Clamp(1.0f - (Distance / GridRadius), 0.0f, 1.0f);
							VoxelGrid[Index] = FMath::Min(VoxelGrid[Index], 1.0f - Alpha);
						}
					}
				}
			}
		}
	}
}

void URogueVaniaCaveMeshGenerator::GenerateTunnelCavity(
	TArray<float>& VoxelGrid,
	const TArray<FPCGPoint>& TunnelPoints,
	float VoxelSize,
	FIntVector GridDimensions,
	const FVector& GridOrigin)
{
	if (TunnelPoints.Num() < 2)
	{
		return;
	}

	// Create tunnel by connecting points with cylindrical cavities
	for (int32 i = 0; i < TunnelPoints.Num() - 1; i++)
	{
		FVector StartPos = TunnelPoints[i].Transform.GetLocation();
		FVector EndPos = TunnelPoints[i + 1].Transform.GetLocation();

		// Get tunnel width from point extents
		float TunnelRadius = FMath::Min(TunnelPoints[i].GetExtents().X, TunnelPoints[i].GetExtents().Y) * 0.5f;

		// Create tunnel segment
		FVector Direction = (EndPos - StartPos).GetSafeNormal();
		float SegmentLength = FVector::Dist(StartPos, EndPos);

		// Sample points along the tunnel
		int32 NumSteps = FMath::CeilToInt(SegmentLength / (VoxelSize * 0.5f));

		for (int32 Step = 0; Step <= NumSteps; Step++)
		{
			float StepAlpha = (NumSteps > 0) ? (float)Step / NumSteps : 0.0f;
			FVector CurrentPos = FMath::Lerp(StartPos, EndPos, StepAlpha);

			// Add some organic variation to tunnel radius
			float CurrentRadius = TunnelRadius * FMath::RandRange(0.8f, 1.2f);

			// Carve cylindrical cavity
			FIntVector GridCenter = WorldToGrid(CurrentPos, VoxelSize, GridOrigin);
			int32 GridRadius = FMath::CeilToInt(CurrentRadius / VoxelSize);

			for (int32 x = -GridRadius; x <= GridRadius; x++)
			{
				for (int32 y = -GridRadius; y <= GridRadius; y++)
				{
					for (int32 z = -GridRadius; z <= GridRadius; z++)
					{
						FIntVector GridPos = GridCenter + FIntVector(x, y, z);

						if (IsValidGridPosition(GridPos, GridDimensions))
						{
							// Calculate distance from tunnel center
							FVector WorldPos = GridToWorld(GridPos, VoxelSize, GridOrigin);
							FVector ToPoint = WorldPos - CurrentPos;

							// Project onto tunnel direction to get radial distance
							FVector ProjectedPoint = CurrentPos + FVector::DotProduct(ToPoint, Direction) * Direction;
							float RadialDistance = FVector::Dist(WorldPos, ProjectedPoint);

							if (RadialDistance <= CurrentRadius)
							{
								int32 Index = GridPos.X + GridPos.Y * GridDimensions.X + GridPos.Z * GridDimensions.X * GridDimensions.Y;

								// Smooth falloff for organic tunnel walls
								float Alpha = FMath::Clamp(1.0f - (RadialDistance / CurrentRadius), 0.0f, 1.0f);
								VoxelGrid[Index] = FMath::Min(VoxelGrid[Index], 1.0f - Alpha);
							}
						}
					}
				}
			}
		}
	}

	// Also carve spherical cavities at each tunnel point for smoother connections
	for (const FPCGPoint& TunnelPoint : TunnelPoints)
	{
		FVector PointPos = TunnelPoint.Transform.GetLocation();
		float PointRadius = FMath::Min(TunnelPoint.GetExtents().X, TunnelPoint.GetExtents().Y) * 0.6f;

		FIntVector GridCenter = WorldToGrid(PointPos, VoxelSize, GridOrigin);
		int32 GridRadius = FMath::CeilToInt(PointRadius / VoxelSize);

		for (int32 x = -GridRadius; x <= GridRadius; x++)
		{
			for (int32 y = -GridRadius; y <= GridRadius; y++)
			{
				for (int32 z = -GridRadius; z <= GridRadius; z++)
				{
					FIntVector GridPos = GridCenter + FIntVector(x, y, z);

					if (IsValidGridPosition(GridPos, GridDimensions))
					{
						float Distance = FVector(x, y, z).Size();
						if (Distance <= GridRadius)
						{
							int32 Index = GridPos.X + GridPos.Y * GridDimensions.X + GridPos.Z * GridDimensions.X * GridDimensions.Y;

							float Alpha = FMath::Clamp(1.0f - (Distance / GridRadius), 0.0f, 1.0f);
							VoxelGrid[Index] = FMath::Min(VoxelGrid[Index], 1.0f - Alpha);
						}
					}
				}
			}
		}
	}
}

void URogueVaniaCaveMeshGenerator::SmoothCaveMesh(TArray<float>& VoxelGrid, FIntVector GridDimensions, int32 Iterations)
{
	if (Iterations <= 0)
	{
		return;
	}

	// Create a temporary grid for smoothing calculations
	TArray<float> TempGrid;
	TempGrid.SetNum(VoxelGrid.Num());

	for (int32 Iter = 0; Iter < Iterations; Iter++)
	{
		// Copy current grid to temp
		TempGrid = VoxelGrid;

		// Apply smoothing filter
		for (int32 x = 1; x < GridDimensions.X - 1; x++)
		{
			for (int32 y = 1; y < GridDimensions.Y - 1; y++)
			{
				for (int32 z = 1; z < GridDimensions.Z - 1; z++)
				{
					int32 Index = x + y * GridDimensions.X + z * GridDimensions.X * GridDimensions.Y;

					// Calculate average of neighboring voxels (3x3x3 kernel)
					float Sum = 0.0f;
					int32 Count = 0;

					for (int32 dx = -1; dx <= 1; dx++)
					{
						for (int32 dy = -1; dy <= 1; dy++)
						{
							for (int32 dz = -1; dz <= 1; dz++)
							{
								FIntVector NeighborPos = FIntVector(x + dx, y + dy, z + dz);

								if (IsValidGridPosition(NeighborPos, GridDimensions))
								{
									int32 NeighborIndex = NeighborPos.X + NeighborPos.Y * GridDimensions.X +
										NeighborPos.Z * GridDimensions.X * GridDimensions.Y;

									// Weight center voxel more heavily
									float Weight = (dx == 0 && dy == 0 && dz == 0) ? 2.0f : 1.0f;
									Sum += TempGrid[NeighborIndex] * Weight;
									Count += Weight;
								}
							}
						}
					}

					// Apply smoothed value
					if (Count > 0)
					{
						VoxelGrid[Index] = Sum / Count;
					}
				}
			}
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Applied %d smoothing iterations to cave mesh"), Iterations);
}

void URogueVaniaCaveMeshGenerator::GenerateMeshFromVoxels(const TArray<float>& VoxelGrid, FIntVector GridDimensions, UStaticMesh* OutMesh)
{
	if (!OutMesh)
	{
		UE_LOG(LogTemp, Error, TEXT("OutMesh is null in GenerateMeshFromVoxels"));
		return;
	}

	// Arrays to hold mesh data
	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector> Normals;
	TArray<FVector2D> UVs;

	// Simple marching cubes implementation
	// For each voxel, check if it's on the surface and generate quads
	for (int32 x = 0; x < GridDimensions.X - 1; x++)
	{
		for (int32 y = 0; y < GridDimensions.Y - 1; y++)
		{
			for (int32 z = 0; z < GridDimensions.Z - 1; z++)
			{
				int32 Index = x + y * GridDimensions.X + z * GridDimensions.X * GridDimensions.Y;
				float VoxelValue = VoxelGrid[Index];

				// If this voxel is solid, check neighbors for surface generation
				if (VoxelValue > 0.5f)
				{
					// Check each face direction
					TArray<FIntVector> Directions = {
						FIntVector(1, 0, 0),   // Right
						FIntVector(-1, 0, 0),  // Left
						FIntVector(0, 1, 0),   // Forward
						FIntVector(0, -1, 0),  // Back
						FIntVector(0, 0, 1),   // Up
						FIntVector(0, 0, -1)   // Down
					};

					for (int32 DirIndex = 0; DirIndex < Directions.Num(); DirIndex++)
					{
						FIntVector Dir = Directions[DirIndex];
						FIntVector NeighborPos = FIntVector(x, y, z) + Dir;

						// Check if neighbor is empty (surface boundary)
						bool bIsNeighborEmpty = false;
						if (!IsValidGridPosition(NeighborPos, GridDimensions))
						{
							bIsNeighborEmpty = true; // Outside bounds = empty
						}
						else
						{
							int32 NeighborIndex = NeighborPos.X + NeighborPos.Y * GridDimensions.X +
								NeighborPos.Z * GridDimensions.X * GridDimensions.Y;
							bIsNeighborEmpty = VoxelGrid[NeighborIndex] <= 0.5f;
						}

						if (bIsNeighborEmpty)
						{
							// Generate quad face
							GenerateQuadFace(FVector(x, y, z), Dir, DirIndex, Vertices, Triangles, Normals, UVs);
						}
					}
				}
			}
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Generated mesh with %d vertices and %d triangles"),
		Vertices.Num(), Triangles.Num() / 3);

	// Create mesh data
	if (Vertices.Num() > 0 && Triangles.Num() > 0)
	{
		// Initialize the static mesh
		OutMesh->SetNumSourceModels(1);
		FStaticMeshSourceModel& SourceModel = OutMesh->GetSourceModel(0);

		// Create mesh description
		FMeshDescription* MeshDescription = OutMesh->CreateMeshDescription(0);
		FStaticMeshAttributes Attributes(*MeshDescription);
		Attributes.Register();

		// Create polygon group
		FPolygonGroupID PolygonGroupID = MeshDescription->CreatePolygonGroup();

		// Populate mesh description with our data
		PopulateMeshDescription(MeshDescription, Vertices, Triangles, Normals, UVs);

		// Commit the mesh description
		OutMesh->CommitMeshDescription(0);

		// Build the static mesh
		OutMesh->Build();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No mesh data generated - empty cave"));
	}
}

void URogueVaniaCaveMeshGenerator::GenerateQuadFace(
	const FVector& VoxelPos,
	const FIntVector& Direction,
	int32 FaceIndex,
	TArray<FVector>& Vertices,
	TArray<int32>& Triangles,
	TArray<FVector>& Normals,
	TArray<FVector2D>& UVs)
{
	// Define quad vertices based on face direction
	TArray<FVector> QuadVertices;
	FVector Normal = FVector(Direction);

	// Generate quad vertices based on direction
	if (Direction.X != 0) // X-axis faces
	{
		float OffsetX = (Direction.X > 0) ? 1.0f : 0.0f;
		QuadVertices.Add(VoxelPos + FVector(OffsetX, 0, 0));
		QuadVertices.Add(VoxelPos + FVector(OffsetX, 1, 0));
		QuadVertices.Add(VoxelPos + FVector(OffsetX, 1, 1));
		QuadVertices.Add(VoxelPos + FVector(OffsetX, 0, 1));
	}
	else if (Direction.Y != 0) // Y-axis faces
	{
		float OffsetY = (Direction.Y > 0) ? 1.0f : 0.0f;
		QuadVertices.Add(VoxelPos + FVector(0, OffsetY, 0));
		QuadVertices.Add(VoxelPos + FVector(0, OffsetY, 1));
		QuadVertices.Add(VoxelPos + FVector(1, OffsetY, 1));
		QuadVertices.Add(VoxelPos + FVector(1, OffsetY, 0));
	}
	else // Z-axis faces
	{
		float OffsetZ = (Direction.Z > 0) ? 1.0f : 0.0f;
		QuadVertices.Add(VoxelPos + FVector(0, 0, OffsetZ));
		QuadVertices.Add(VoxelPos + FVector(1, 0, OffsetZ));
		QuadVertices.Add(VoxelPos + FVector(1, 1, OffsetZ));
		QuadVertices.Add(VoxelPos + FVector(0, 1, OffsetZ));
	}

	// UV coordinates based on face direction
	TArray<FVector2D> QuadUVs;
	QuadUVs.Add(FVector2D(0.0f, 0.0f));
	QuadUVs.Add(FVector2D(1.0f, 0.0f));
	QuadUVs.Add(FVector2D(1.0f, 1.0f));
	QuadUVs.Add(FVector2D(0.0f, 1.0f));

	// Add vertices to the main array
	int32 StartIndex = Vertices.Num();
	for (int32 i = 0; i < QuadVertices.Num(); i++)
	{
		Vertices.Add(QuadVertices[i] * 100.0f); // Scale to world units
		Normals.Add(Normal);
		UVs.Add(QuadUVs[i]); // Use UV coordinates instead of FVector2D(0.0f, 0.0f)
	}

	// Add triangles (two triangles per quad)
	if (Direction.X > 0 || Direction.Y < 0 || Direction.Z > 0)
	{
		// Counter-clockwise winding
		Triangles.Add(StartIndex + 0);
		Triangles.Add(StartIndex + 1);
		Triangles.Add(StartIndex + 2);

		Triangles.Add(StartIndex + 0);
		Triangles.Add(StartIndex + 2);
		Triangles.Add(StartIndex + 3);
	}
	else
	{
		// Clockwise winding for opposite faces
		Triangles.Add(StartIndex + 0);
		Triangles.Add(StartIndex + 2);
		Triangles.Add(StartIndex + 1);

		Triangles.Add(StartIndex + 0);
		Triangles.Add(StartIndex + 3);
		Triangles.Add(StartIndex + 2);
	}
}

void URogueVaniaCaveMeshGenerator::PopulateMeshDescription(
	FMeshDescription* MeshDescription,
	const TArray<FVector>& Vertices,
	const TArray<int32>& Triangles,
	const TArray<FVector>& Normals,
	const TArray<FVector2D>& UVs)
{
	if (!MeshDescription)
	{
		return;
	}

	FStaticMeshAttributes Attributes(*MeshDescription);

	// Get attribute accessors
	TVertexAttributesRef<FVector3f> VertexPositions = Attributes.GetVertexPositions();
	TVertexInstanceAttributesRef<FVector3f> VertexInstanceNormals = Attributes.GetVertexInstanceNormals();
	TVertexInstanceAttributesRef<FVector2f> VertexInstanceUVs = Attributes.GetVertexInstanceUVs();

	// Reserve space
	MeshDescription->ReserveNewVertices(Vertices.Num());
	MeshDescription->ReserveNewVertexInstances(Vertices.Num());
	MeshDescription->ReserveNewPolygons(Triangles.Num() / 3);
	MeshDescription->ReserveNewEdges(Triangles.Num());

	// Add vertices
	TArray<FVertexID> VertexIDs;
	for (int32 i = 0; i < Vertices.Num(); i++)
	{
		FVertexID VertexID = MeshDescription->CreateVertex();
		VertexPositions[VertexID] = FVector3f(Vertices[i]);
		VertexIDs.Add(VertexID);
	}

	// Add triangles
	for (int32 i = 0; i < Triangles.Num(); i += 3)
	{
		TArray<FVertexInstanceID> VertexInstanceIDs;

		for (int32 j = 0; j < 3; j++)
		{
			int32 VertexIndex = Triangles[i + j];
			FVertexInstanceID VertexInstanceID = MeshDescription->CreateVertexInstance(VertexIDs[VertexIndex]);

			VertexInstanceNormals[VertexInstanceID] = FVector3f(Normals[VertexIndex]);
			VertexInstanceUVs[VertexInstanceID] = FVector2f(UVs[VertexIndex]);

			VertexInstanceIDs.Add(VertexInstanceID);
		}

		// Create polygon
		MeshDescription->CreatePolygon(FPolygonGroupID(0), VertexInstanceIDs);
	}
}