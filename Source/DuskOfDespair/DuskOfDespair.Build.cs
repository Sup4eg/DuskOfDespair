// Copyright Fireteam Interactive

using UnrealBuildTool;

public class DuskOfDespair : ModuleRules
{
	public DuskOfDespair(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] { });
	}
}