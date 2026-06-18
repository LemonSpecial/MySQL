// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class MySQL : ModuleRules
{
    public MySQL(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        string MySQLPath = Path.Combine(ModuleDirectory, "../../ThirdParty");
        string MySQLIncludePath = Path.Combine(MySQLPath, "include");
        string MySQLLibPath = Path.Combine(MySQLPath, "lib");
        if (!Directory.Exists(MySQLPath)) return;
        PublicIncludePaths.Add(MySQLIncludePath);
        PublicSystemLibraryPaths.Add(MySQLLibPath);
        
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicAdditionalLibraries.Add(Path.Combine(MySQLLibPath, "libmysql.lib"));
            string SourceDLLPath = Path.Combine(MySQLLibPath, "libmysql.dll");
            if (File.Exists(SourceDLLPath))
            {
                RuntimeDependencies.Add("$(BinaryOutputDir)/libmysql.dll", SourceDLLPath);
                PublicDelayLoadDLLs.Add("libmysql.dll");
                PublicRuntimeLibraryPaths.Add(MySQLLibPath);
            }
        }
        
        PublicDependencyModuleNames.AddRange(
            new string[] { "Core", } );
        PrivateDependencyModuleNames.AddRange(
            new string[] { "CoreUObject", "Engine", "Slate", "SlateCore", }
        );
    }
}