// Copyright Fireteam Interactive

using UnrealBuildTool;
using System.Collections.Generic;

public class DuskOfDespairEditorTarget : TargetRules
{
	public DuskOfDespairEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange(new string[] { "DuskOfDespair" });
	}
}