#include "offsets.h"
#include "memory.h"
#include <stdio.h>
#include <iostream>
#include <cstdio>

int main() {

    Memory mem = Memory("cs2.exe");

    const auto client = mem.GetModuleAddress("client.dll");

    bool programRunning = true;

    printf("%p", &client);
    
    auto message1 = "DEBUG-CONSOLE Touche espace enfoncée avec success";
    auto message2 = "DEBUG-CONSOLE Touche espace relachée avec success";

    //Lire le process CS2

    int jumpValue = 65537;
    int releaseValue = 16777472; //via cheat engine

    int newFov = 120;

    uintptr_t player = mem.Read<uintptr_t>(client + offsets::dwLocalPlayerPawn);

    uintptr_t fov = mem.Read<uintptr_t>(player + offsets::m_pCameraServices);

    int fovValue = mem.Read<int>(fov + offsets::m_iFOV);
    std::cout << "valeur FOV VALUE " << fovValue << "\n";

    std::cout << "valeur FOV VALUE " << newFov << "\n";

    // mem.Write(fov + offsets::m_iFOV, newFov);

    

    while (programRunning) 
        {
            mem.Write(fov + offsets::m_iFOV, newFov);
            
            Sleep(1);

            continue;

        }
    }

    return 0;

}