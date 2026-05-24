#pragma once
#include <cstddef>

namespace offsets {
	constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x2090880; // C BASE PLAYER
	constexpr std::ptrdiff_t dwEntityList = 0x250C5B0;

	constexpr std::ptrdiff_t m_Glow = 0xDD8; // CGlowProperty
	constexpr std::ptrdiff_t m_iTeamNum = 0x3EB; // uint8
	constexpr std::ptrdiff_t m_iHealth = 0x34C; // int32

	constexpr std::ptrdiff_t m_hPlayerPawn = 0x90C; // CHandle<C_CSPlayerPawn>

	constexpr std::ptrdiff_t m_bGlowing = 0x51; // bool
	constexpr std::ptrdiff_t m_glowColorOverride = 0x40; // Color

}