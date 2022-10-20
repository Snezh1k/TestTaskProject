// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestTaskProject : ModuleRules
{
	public TestTaskProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
