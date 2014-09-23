#pragma once

#include <SPTLib\memutils.hpp>

namespace Patterns
{
	// Shared patterns.
	const MemUtils::ptnvec ptnsPMJump =
	{
		{
			"HL-SteamPipe",
			{
				0x51, 0xA1, '?', '?', '?', '?', 0x53, 0x56, 0x8B, 0x88, 0xD0, 0x00, 0x00, 0x00, 0x85, 0xC9, 0x74, 0x13, 0x8B, 0x88, 0xC8, 0x00, 0x00, 0x00, 0x5E, 0x83, 0xC9, 0x02, 0x5B, 0x89, 0x88, 0xC8, 0x00, 0x00, 0x00, 0x59, 0xC3, 0x8D, 0x88, 0xF0, 0xF3, 0x04, 0x00, 0x68
			},
			"xx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"gunman",
			{
				0x51, 0xA1, '?', '?', '?', '?', 0x53, 0x8B, 0x88, 0xD0, 0x00, 0x00, 0x00, 0x85, 0xC9, 0x74, 0x12, 0x8B, 0x88, 0xC8, 0x00, 0x00, 0x00, 0x5B, 0x83, 0xC9, 0x02, 0x89, 0x88, 0xC8, 0x00, 0x00, 0x00, 0x59, 0xC3, 0x8D, 0x88, 0xF0, 0xF3, 0x04, 0x00, 0x68
			},
			"xx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"AG-Server",
			{
				0x51, 0x8B, 0x0D, '?', '?', '?', '?', 0x53, 0x8B, 0x81, 0xD0, 0x00, 0x00, 0x00, 0x85, 0xC0, 0x74, 0x11, 0x8B, 0x81, 0xC8, 0x00, 0x00, 0x00, 0x5B, 0x0C, 0x02, 0x89, 0x81, 0xC8, 0x00, 0x00, 0x00, 0x59, 0xC3, 0xD9, 0x81, 0xCC, 0x00, 0x00, 0x00, 0xD8, 0x1D
			},
			"xxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"AG-Client",
			{
				0x51, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0x81, 0xD0, 0x00, 0x00, 0x00, 0x85, 0xC0, 0x74, 0x09, 0x83, 0x89, 0xC8, 0x00, 0x00, 0x00, 0x02, 0x59, 0xC3, 0xD9, 0x05, '?', '?', '?', '?', 0xD9, 0x81, 0xCC, 0x00, 0x00, 0x00, 0xDA, 0xE9
			},
			"xxx????xxxxxxxxxxxxxxxxxxxxx????xxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsPMPreventMegaBunnyJumping =
	{
		{
			"HL-SteamPipe",
			{
				0x51, 0x8B, 0x0D, '?', '?', '?', '?', 0xD9, 0x81, '?', '?', '?', '?', 0xD8, 0x0D, '?', '?', '?', '?', 0xD9, 0x54, 0x24, 0x00, 0xD8, 0x1D, '?', '?', '?', '?', 0xDF, 0xE0, 0xF6, 0xC4, 0x41, 0x7B, 0x3B, 0x83, 0xC1
			},
			"xxx????xx????xx????xxxxxx????xxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsPMPlayerMove =
	{
		{
			"HL-SteamPipe",
			{
				0xA1, '?', '?', '?', '?', 0x8B, 0x4C, 0x24, 0x04, 0x55, 0x57, 0x33, 0xFF, 0x89, 0x48, 0x04, 0xE8, '?', '?', '?', '?', 0x8B, 0x15, '?', '?', '?', '?', 0x33, 0xC9, 0x89, 0xBA, 0x8C, 0x54, 0x04, 0x00, 0xA1, '?', '?', '?', '?', 0x8A, 0x88, 0x5A, 0x54, 0x04, 0x00, 0x89
			},
			"x????xxxxxxxxxxxx????xx????xxxxxxxxx????xxxxxxx"
		}
	};
}
