// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Strategy_Pattorn : ModuleRules
{
	public Strategy_Pattorn(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
