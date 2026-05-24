#include "offsets.h"
#include "memory.h"
#include <stdio.h>
#include <iostream>
#include <cstdio>

int main() {

    Memory mem = Memory("cs2.exe");

    const auto client = mem.GetModuleAddress("client.dll");

    bool programRunning = true;

    uintptr_t player = mem.Read<uintptr_t>(client + offsets::dwLocalPlayerPawn);

    auto valeurTemp = 0;

    while (programRunning) 
        {
        uintptr_t localPlayer = mem.Read<uintptr_t>(client + offsets::dwLocalPlayerPawn);
        uint8_t localTeam = mem.Read<uint8_t>(localPlayer + offsets::m_iTeamNum);
        
        uintptr_t entityList = mem.Read<uintptr_t>(client + offsets::dwEntityList);


        for (int i = 0; i < 64; i++)
        {
            uintptr_t entry1 = mem.Read<uintptr_t>(entityList + (8 * (i & 0x7FFF) >> 9) + 16);
        }
            
            //mem.Write(valeurTemp + offsets::m_iFOV, 120);
            
        Sleep(1);

        continue;
        }

    return 0;

    }
