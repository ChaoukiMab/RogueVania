// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RogueVania : ModuleRules
{
	public RogueVania(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "PCG", "MeshDescription", "StaticMeshDescription", "MeshUtilities", "MeshBuilder", "ProceduralMeshComponent" });

		PrivateDependencyModuleNames.AddRange(new string[] { "PCG" });

		// Uncomment if you are using Slate UI
		 PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "ToolMenus", "MeshConversion", "GeometryCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
