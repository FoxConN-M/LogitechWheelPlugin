// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class LogitechWheelPlugin : ModuleRules
{
    public LogitechWheelPlugin(ReadOnlyTargetRules Target) : base(Target)
    {
        // Adiciona os caminhos de includes públicos
        PublicIncludePaths.AddRange(
            new string[] {
                Path.Combine(ModuleDirectory, "Public"),
                // Adicione outros diretórios de includes públicos se necessário
            }
        );
        
        // Adiciona os caminhos de includes privados
        PrivateIncludePaths.AddRange(
            new string[] {
                Path.Combine(ModuleDirectory, "Private"),
                // Adicione outros diretórios de includes privados se necessário
            }
        );
        
        // Dependências públicas
        PublicDependencyModuleNames.AddRange(
            new string[] {
                "Core",            // Módulo básico do Unreal Engine
                "InputCore",       // Para entrada do teclado, mouse, etc.
                "InputDevice",     // Para dispositivos de entrada (como volantes)
                // Adicione outras dependências públicas aqui
            }
        );
        
        // Dependências privadas
        PrivateDependencyModuleNames.AddRange(
            new string[] {
                "CoreUObject",     // Necessário para tipos básicos e reflexão do Unreal
                "Engine",          // Necessário para integração com o motor do Unreal
                "Slate",           // UI
                "SlateCore",       // UI core
                // Adicione outras dependências privadas aqui
            }
        );
        
        // Dependências de módulos carregados dinamicamente
        DynamicallyLoadedModuleNames.AddRange(
            new string[] {
                // Módulos carregados dinamicamente se houver
            }
        );

        // Definindo o diretório base e o diretório das bibliotecas da Logitech
        string BaseDirectory = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", ".."));
        string LogitechDirectory = Path.Combine(BaseDirectory, "Logitech", "lib", Target.Platform.ToString());
        string[] LibraryNames = { "LogitechSteeringWheelLib" };

        // Adiciona o caminho para as bibliotecas
        PublicSystemLibraryPaths.Add(LogitechDirectory);

        // Adiciona as bibliotecas necessárias
        foreach (string LibraryName in LibraryNames)
        {
            PublicAdditionalLibraries.Add(Path.Combine(LogitechDirectory, LibraryName + ".lib"));
        }
    }
}
