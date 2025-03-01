// 2018-2021 Kyr Dunenkoff

using UnrealBuildTool;
using System.Collections.Generic;

public class WActualDroneTarget : TargetRules
{
	public WActualDroneTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "WActualDrone" } );
	}
}
