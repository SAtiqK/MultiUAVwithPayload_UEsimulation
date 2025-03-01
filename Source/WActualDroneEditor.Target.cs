// 2018-2021 Kyr Dunenkoff

using UnrealBuildTool;
using System.Collections.Generic;

public class WActualDroneEditorTarget : TargetRules
{
	public WActualDroneEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "WActualDrone" } );
	}
}
