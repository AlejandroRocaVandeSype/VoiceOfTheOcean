// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VoiceOfTheOcean : ModuleRules
{
	public VoiceOfTheOcean(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AudioCapture",
			"SignalProcessing",
			"AudioMixer",
			"FMODStudio",
			"AIModule",
			"DonAINavigation",
            "Niagara"		// For Niagara Systems
            });

		// Uncomment if you are using Slate UI
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		 PrivateIncludePaths.AddRange(new string[] {
            "VoiceOfTheOcean/"
         
        });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
