// Copyright Fireteam Interactive

using UnrealBuildTool;
using System.Collections.Generic;

public class DuskOfDespairTarget : TargetRules
{
	public DuskOfDespairTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange(new string[] { "DuskOfDespair" });
	}
}