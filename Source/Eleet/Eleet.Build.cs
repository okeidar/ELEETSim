// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Eleet : ModuleRules
{
	public Eleet(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
