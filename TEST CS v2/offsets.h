#pragma once
#include <cstddef>

namespace offsets {

	constexpr std::ptrdiff_t jump = 0x208A020;

	constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x2090880; // C BASE PLAYER
	
	constexpr std::ptrdiff_t m_pCameraServices = 0x1218; //CPlayer_CameraServices* dans la classe C_BasePlayerPawn



	constexpr std::ptrdiff_t m_iFOV = 0x290; //uint32 dans la classe CCSPlayerBase_CameraServices

}