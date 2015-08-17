#pragma once

#include <SPTLib/MemUtils.hpp>

namespace Patterns
{
	// Engine patterns.
	const MemUtils::ptnvec ptnsLoadAndDecryptHwDLL =
	{
		{
			"HL-NGHL",
			{
				0x8B, 0x0D, '?', '?', '?', '?', 0x53, 0x56, 0x33, 0xDB, 0x8B, 0x01, 0x57, 0x53, 0x68, '?', '?', '?', '?', 0xFF, 0x74, 0x24, 0x18, 0xFF, 0x50, 0x28, 0x8B, 0x0D, '?', '?', '?', '?', 0x8B, 0xF0, 0x6A, 0x02, 0x53, 0x8B, 0x01, 0x56, 0xFF, 0x50, 0x30, 0x8B, 0x0D
			},
			"xx????xxxxxxxxx????xxxxxxxxx????xxxxxxxxxxxxx"
		},

		{
			"HL-WON",
			{
				0x8B, 0x44, 0x24, 0x04, 0x53, 0x56, 0x57, 0x68, '?', '?', '?', '?', 0x50, 0xE8, '?', '?', '?', '?', 0x8B, 0xF0, 0x6A, 0x02, 0x6A, 0x00, 0x56, 0xE8, '?', '?', '?', '?', 0x56, 0xE8, '?', '?', '?', '?', 0x56, 0x8B, 0xF8, 0xE8
			},
			"xxxxxxxx????xx????xxxxxxxx????xx????xxxx"
		}
	};

	const MemUtils::ptnvec ptnsCbuf_Execute =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x00, 0x04, 0x00, 0x00, 0x8B, 0x15, '?', '?', '?', '?', 0x53, 0x56, 0x57, 0x85, 0xD2, 0x0F, 0x84, 0xB5, 0x00, 0x00, 0x00, 0x8B, 0x1D, '?', '?', '?', '?', 0x33, 0xC9, 0x33, 0xF6, 0x85, 0xD2, 0x7E, 0x22, 0x8A, 0x04, 0x1E, 0x3C, 0x22, 0x75, 0x01, 0x41
			},
			"xxxxxxxxxxx????xxxxxxxxxxxxx????xxxxxxxxxxxxxxxx"
		},

		{
			"HL-NGHL",
			{
				0x8B, 0x15, '?', '?', '?', '?', 0x81, 0xEC, 0x00, 0x04, 0x00, 0x00, 0x53, 0x33, 0xDB, 0x55, 0x56, 0x3B, 0xD3, 0x57, 0x0F, 0x84, '?', '?', '?', '?', 0x8B, 0x2D, '?', '?', '?', '?', 0x33, 0xC9, 0x33, 0xF6, 0x3B, 0xD3, 0x7E, 0x22, 0x8A, 0x04, 0x2E, 0x3C, 0x22, 0x75, 0x01, 0x41
			},
			"xx????xxxxxxxxxxxxxxxx????xx????xxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsCvar_RegisterVariable =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x53, 0x56, 0x8B, 0x75, 0x08, 0x57, 0x8B, 0x06, 0x50, 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x85, 0xC0, 0x74, 0x17, 0x8B, 0x0E, 0x51, 0x68
			},
			"xxxxxxxxxxxxxxxx????xxxxxxxxxxx"
		},

		{
			"HL-NGHL",
			{
				0x83, 0xEC, 0x14, 0x53, 0x56, 0x8B, 0x74, 0x24, 0x20, 0x57, 0x8B, 0x06, 0x50, 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x85, 0xC0, 0x74, 0x17, 0x8B, 0x0E, 0x51, 0x68, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x08, 0x5F, 0x5E, 0x5B, 0x83, 0xC4, 0x14, 0xC3, 0x8B, 0x16, 0x52, 0xE8
			},
			"xxxxxxxxxxxxxx????xxxxxxxxxxx????x????xxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsCvar_DirectSet =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x00, 0x04, 0x00, 0x00, 0x56, 0x8B, 0x75, 0x0C, 0x57, 0x8B, 0x7D, 0x08, 0x85, 0xFF, 0x0F, 0x84, '?', '?', '?', '?', 0x85, 0xF6, 0x0F, 0x84, '?', '?', '?', '?', 0x8A, 0x47, 0x08, 0x53, 0x84, 0xC0, 0x0F, 0x89
			},
			"xxxxxxxxxxxxxxxxxxxxx????xxxx????xxxxxxxx"
		},
		
		{
			"HL-NGHL",
			{
				0x8B, 0x4C, 0x24, 0x08, 0x81, 0xEC, 0x00, 0x04, 0x00, 0x00, 0x56, 0x8B, 0xB4, 0x24, 0x08, 0x04, 0x00, 0x00, 0x57, 0x8B, 0xF9, 0x85, 0xF6, 0x0F, 0x84, '?', '?', '?', '?', 0x85, 0xC9, 0x0F, 0x84, '?', '?', '?', '?', '?', 0x46, 0x08
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxx????xxxx?????xx"
		},

		{
			"HL-WON",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x00, 0x04, 0x00, 0x00, 0x8B, 0x4D, 0x0C, 0x56, 0x8B, 0x75, 0x08, 0x57, 0x85, 0xF6, 0x8B, 0xF9, 0x0F, 0x84, '?', '?', '?', '?', 0x85, 0xC9, 0x0F, 0x84
			},
			"xxxxxxxxxxxxxxxxxxxxxxx????xxxx"
		}
	};

	const MemUtils::ptnvec ptnsCvar_FindVar =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x8D, 0x45, 0x08, 0x56, 0x50, 0xFF, '?', '?', '?', '?', '?', 0x8B, 0x35, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x85, 0xF6, 0x74, 0x1A, 0x8B, 0x0E, 0x8B, 0x55, 0x08, 0x51, 0x52, 0xE8
			},
			"xxxxxxxxx?????xx????xxxxxxxxxxxxxxx"
		},

		{
			"HL-NGHL",
			{
				0x8D, 0x44, 0x24, 0x04, 0x56, 0x50, 0xFF, '?', '?', '?', '?', '?', 0x8B, 0x35, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x85, 0xF6, 0x74, 0x1B, 0x8B, 0x0E, 0x8B, 0x54, 0x24, 0x08, 0x51, 0x52, 0xE8
			},
			"xxxxxxx?????xx????xxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsCbuf_InsertText =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x53, 0x8B, 0x5D, 0x08, 0x56, 0x8B, 0x35, '?', '?', '?', '?', 0x57, 0x53, 0xE8, '?', '?', '?', '?', 0x8B, 0x0D, '?', '?', '?', '?', 0x03, 0xC6, 0x83, 0xC4, 0x04, 0x3B, 0xC1, 0x7C, 0x12, 0x68, '?', '?', '?', '?', 0xE8
			},
			"xxxxxxxxxx????xxx????xx????xxxxxxxxxx????x"
		},

		{
			"HL-NGHL",
			{
				0x53, 0x8B, 0x5C, 0x24, 0x08, 0x56, 0x8B, 0x35, '?', '?', '?', '?', 0x57, 0x53, 0xE8, '?', '?', '?', '?', 0x8B, 0x0D, '?', '?', '?', '?', 0x03, 0xC6, 0x83, 0xC4, 0x04, 0x3B, 0xC1, 0x7C
			},
			"xxxxxxxx????xxx????xx????xxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsCmd_AddMallocCommand =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x56, 0x57, 0x8B, 0x7D, 0x08, 0x57, 0xE8, '?', '?', '?', '?', 0x8A, 0x08, 0x83, 0xC4, 0x04, 0x84, 0xC9, 0x74, 0x12, 0x57, 0x68, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x08, 0x5F, 0x5E, 0x5D, 0xC3, 0x8B, 0x35
			},
			"xxxxxxxxxx????xxxxxxxxxxx????x????xxxxxxxxx"
		},

		{
			"HL-NGHL",
			{
				0x56, 0x57, 0x8B, 0x7C, 0x24, 0x0C, 0x57, 0xE8, '?', '?', '?', '?', 0x8A, 0x08, 0x83, 0xC4, 0x04, 0x84, 0xC9, 0x74, 0x11, 0x57, 0x68, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x08, 0x5F, 0x5E, 0xC3, 0x8B, 0x35
			},
			"xxxxxxxx????xxxxxxxxxxx????x????xxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsHost_AutoSave_f =
	{
		{
			"HL-SteamPipe",
			{
				0xA1, '?', '?', '?', '?', 0xB9, 0x01, 0x00, 0x00, 0x00, 0x3B, 0xC1, 0x0F, 0x85, 0x9F, 0x00, 0x00, 0x00, 0xA1, '?', '?', '?', '?', 0x85, 0xC0, 0x75, 0x10, 0x68, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x33, 0xC0, 0xC3, 0x39, 0x0D
			},
			"x????xxxxxxxxxxxxxx????xxxxx????x????xxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsHost_Tell_f =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x40, 0xA1, '?', '?', '?', '?', 0x56, 0x83, 0xF8, 0x01, 0x75, 0x0A, 0xE8, '?', '?', '?', '?', 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0xE8, '?', '?', '?', '?', 0x83, 0xF8, 0x03, 0x0F, 0x8C, '?', '?', '?', '?', 0xE8
			},
			"xxxxxxx????xxxxxxx????xxxxxx????xxxxx????x"
		},

		{
			"HL-NGHL",
			{
				0xA1, '?', '?', '?', '?', 0x83, 0xEC, 0x40, 0x83, 0xF8, 0x01, 0x56, 0x75, 0x09, 0x5E, 0x83, 0xC4, 0x40, 0xE9, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x83, 0xF8, 0x03, 0x0F, 0x8C, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x8B, 0xF0, 0x85, 0xF6, 0x0F, 0x84
			},
			"x????xxxxxxxxxxxxxx????x????xxxxx????x????xxxxxx"
		},

		{
			"HL-4554",
			{
				0xA1, '?', '?', '?', '?', 0x83, 0xEC, 0x40, 0x83, 0xF8, 0x01, 0x56, 0x75, 0x0A, 0xE8, '?', '?', '?', '?', 0x5E, 0x83, 0xC4, 0x40, 0xC3, 0xE8, '?', '?', '?', '?', 0x83, 0xF8, 0x03, 0x0F, 0x8C, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x8B, 0xF0, 0x85, 0xF6, 0x0F, 0x84
			},
			"x????xxxxxxxxxx????xxxxxx????xxxxx????x????xxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsHost_Changelevel2_f =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0xC4, 0x00, 0x00, 0x00, 0x53, 0x56, 0x33, 0xDB, 0x57, 0x89, 0x5D, 0xFC, 0xC7, 0x05, '?', '?', '?', '?', 0x04, 0x00, 0x00, 0x00, 0xE8, '?', '?', '?', '?', 0x83, 0xF8, 0x02, 0x7D, 0x14, 0x68
			},
			"xxxxxxxxxxxxxxxxxxx????xxxxx????xxxxxx"
		},

		{
			"HL-NGHL",
			{
				0x81, 0xEC, 0xC0, 0x00, 0x00, 0x00, 0xC7, 0x05, '?', '?', '?', '?', 0x04, 0x00, 0x00, 0x00, 0x55, 0x56, 0x57, 0x33, 0xED, 0xE8, '?', '?', '?', '?', 0x83, 0xF8, 0x02, 0x7D, 0x17, 0x68, '?', '?', '?', '?', 0xE8
			},
			"xxxxxxxx????xxxxxxxxxx????xxxxxx????x"
		}
	};

	const MemUtils::ptnvec ptnsSCR_BeginLoadingPlaque =
	{
		{
			"HL-SteamPipe",
			{
				0x6A, 0x01, 0xE8, '?', '?', '?', '?', 0xA1, '?', '?', '?', '?', 0x83, 0xC4, 0x04, 0x83, 0xF8, 0x03, 0x74, 0x0A, 0x83, 0xF8, 0x04, 0x74, 0x05, 0x83, 0xF8, 0x05, 0x75, '?', 0x83, 0x3D, '?', '?', '?', '?', 0x02, 0x75, '?', 0x56, 0xE8
			},
			"xxx????x????xxxxxxxxxxxxxxxxx?xx????xx?xx"
		}
	};

	const MemUtils::ptnvec ptnsHost_FilterTime =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x08, 0xD9, 0x05, '?', '?', '?', '?', 0xD8, 0x1D, '?', '?', '?', '?', 0xDF, 0xE0, 0x25, 0x00, 0x41, 0x00, 0x00, 0x75, 0x3F, 0xE8, '?', '?', '?', '?', 0x85, 0xC0, 0x75, 0x09, 0xA1
			},
			"xxxxxxxx????xx????xxxxxxxxxx????xxxxx"
		}
	};

	const MemUtils::ptnvec ptnsSeedRandomNumberGenerator =
	{
		{
			"HL-SteamPipe",
			{
				0x6A, 0x00, 0xE8, '?', '?', '?', '?', 0xF7, 0xD8, 0x83, 0xC4, 0x04, 0x3D, 0xE8, 0x03, 0x00, 0x00, 0xA3, '?', '?', '?', '?', 0x7E, 0x08, 0xF7, 0xD8, 0xA3, '?', '?', '?', '?', 0xC3, 0x3D, 0x18, 0xFC, 0xFF, 0xFF, 0x7E, 0x0A, 0x2D, 0x38, 0xAD, 0x53, 0x01, 0xA3, '?', '?', '?', '?', 0xC3
			},
			"xxx????xxxxxxxxxxx????xxxxx????xxxxxxxxxxxxxx????x"
		}
	};

	const MemUtils::ptnvec ptnsRandomFloat =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x51, 0x8D, 0x45, 0x0C, 0x8D, 0x4D, 0x08, 0x50, 0x51, 0xFF, 0x15, '?', '?', '?', '?', 0x83, 0xC4, 0x08, 0xE8
			},
			"xxxxxxxxxxxxxx????xxxx"
		},

		{
			"HL-NGHL",
			{
				0x51, 0x8D, 0x44, 0x24, 0x0C, 0x8D, 0x4C, 0x24, 0x08, 0x50, 0x51, 0xFF, 0x15, '?', '?', '?', '?', 0xE8
			},
			"xxxxxxxxxxxxx????x"
		}
	};

	const MemUtils::ptnvec ptnsRandomLong =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x53, 0x8D, 0x45, 0x0C, 0x56, 0x8D, 0x4D, 0x08, 0x50, 0x51, 0xFF, 0x15, '?', '?', '?', '?', 0x8B, 0x75, 0x0C
			},
			"xxxxxxxxxxxxxxx????xxx"
		},

		{
			"HL-NGHL",
			{
				0x53, 0x8D, 0x44, 0x24, 0x0C, 0x56, 0x8D, 0x4C, 0x24, 0x0C, 0x50, 0x51, 0xFF, 0x15, '?', '?', '?', '?', 0x8B, 0x74, 0x24, 0x18
			},
			"xxxxxxxxxxxxxx????xxxx"
		}
	};

	const MemUtils::ptnvec ptnsSCR_DrawFPS =
	{
		{
			"HL-SteamPipe",
			{
				0xD9, 0x05, '?', '?', '?', '?', 0xD8, 0x1D, '?', '?', '?', '?', 0xDF, 0xE0, 0xF6, 0xC4, '?', '?', '?', 0xDD, 0x05, '?', '?', '?', '?', 0xDC, 0x1D, '?', '?', '?', '?', 0xDF, 0xE0, 0xF6, 0xC4, 0x41, '?', '?', 0xDD, 0x05
			},
			"xx????xx????xxxx???xx????xx????xxxxx??xx"
		}
	};

	const MemUtils::ptnvec ptnsPM_PlayerTrace =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x44, 0x8B, 0x45, 0x18, 0x56, 0x57, 0x6A, 0x00, 0x50, 0xA1, '?', '?', '?', '?', 0x8B, 0x90, 0x4C, 0x02, 0x00, 0x00, 0x8D, 0x88, 0x50, 0x02, 0x00, 0x00, 0x8B, 0x45, 0x14, 0x51, 0x8B, 0x4D, 0x10, 0x52, 0x8B, 0x55, 0x0C, 0x50, 0x51, 0x8D, 0x45, 0xBC, 0x52, 0x50, 0xE8
			},
			"xxxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		},

		{
			"HL-NGHL",
			{
				0x8B, 0x44, 0x24, 0x14, 0x83, 0xEC, 0x44, 0x56, 0x57, 0x6A, 0x00, 0x50, 0xA1, '?', '?', '?', '?', 0x8B, 0x90, 0x4C, 0x02, 0x00, 0x00, 0x8D, 0x88, 0x50, 0x02, 0x00, 0x00, 0x8B, 0x44, 0x24, 0x64, 0x51, 0x8B, 0x4C, 0x24, 0x64, 0x52, 0x8B, 0x54, 0x24, 0x64, 0x50, 0x51, 0x8D, 0x44, 0x24, 0x20, 0x52, 0x50, 0xE8
			},
			"xxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsMiddleOfSV_ReadClientMessage =
	{
		{
			"HL-SteamPipe",
			{
				0x56, 0xE8, '?', '?', '?', '?', 0x8B, 0x86, 0x9C, 0x4B, 0x00, 0x00, 0x89, 0x35, '?', '?', '?', '?', 0xA3, '?', '?', '?', '?', 0xC7, 0x86, 0x44, 0x25, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x05
			},
			"xx????xxxxxxxx????x????xxxxxxxxxxxx"
		},
		
		{
			"HL-4554",
			{
				0x56, 0xE8, '?', '?', '?', '?', 0x8B, 0x86, 0x9C, 0x4B, 0x00, 0x00, 0x83, 0xC4, 0x04, 0x89, 0x35, '?', '?', '?', '?', 0xA3, '?', '?', '?', '?', 0xC7, 0x86, 0x44, 0x25, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x05
			},
			"xx????xxxxxxxxxxx????x????xxxxxxxxxxxx"
		},

		{
			"HL-WON",
			{
				0x56, 0xE8, '?', '?', '?', '?', 0x8B, 0x96, 0x9C, 0x4B, 0x00, 0x00, 0x89, 0x35, '?', '?', '?', '?', 0x89, 0x15, '?', '?', '?', '?', 0xC7, 0x86, 0x44, 0x25, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0x05
			},
			"xx????xxxxxxxx????xx????xxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsHFRMultiplayerCheck =
	{
		{
			"HL-SteamPipe",
			{
				0xDF, 0xE0, 0x25, 0x00, 0x41, 0x00, 0x00, 0x75, 0x3F, 0xE8, '?', '?', '?', '?', 0x85, 0xC0, 0x75, 0x09, 0xA1, '?', '?', '?', '?', 0x85, 0xC0, 0x74, 0x2D, 0xD9, 0x05, '?', '?', '?', '?', 0xD8, 0x0D, '?', '?', '?', '?', 0xB8, 0x01, 0x00, 0x00, 0x00, 0xDD, 0x1D
			},
			"xxxxxxxxxx????xxxxx????xxxxxx????xx????xxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsMiddleOfSV_RunCmd =
	{
		{
			"HL-SteamPipe",
			{
				0x8B, 0x88, 0x90, 0x00, 0x00, 0x00, 0x89, 0x4A, 0x40, 0x8B, 0x15, '?', '?', '?', '?', 0x83, 0xC2, 0x38, 0x52, 0x68, '?', '?', '?', '?', 0xE8, '?', '?', '?', '?', 0x83, 0xC4, 0x08, 0xA1
			},
			"xxxxxxxxxxx????xxxxx????x????xxxx"
		}
	};

	const MemUtils::ptnvec ptnsKey_Event =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x00, 0x04, 0x00, 0x00, 0x8B, 0x45, 0x08, 0x56, 0x3D, 0x00, 0x01, 0x00, 0x00, 0x57, 0x0F, 0x8D, 0x8D, 0x03, 0x00, 0x00, 0x8D, 0x45, 0x0C, 0x8D, 0x4D, 0x08, 0x50
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsCBaseUI__Initialize =
	{
		{
			"HL-SteamPipe",
			{
				0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x04, 0x02, 0x00, 0x00, 0xA1, '?', '?', '?', '?', 0x56, 0x85, 0xC0, 0x8B, 0xF1, 0x0F, 0x85, 0x60, 0x01, 0x00, 0x00, 0x8B, 0x45, 0x08, 0x53, 0x57, 0x6A, 0x00
			},
			"xxxxxxxxxx????xxxxxxxxxxxxxxxxxx"
		}
	};

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
	
	const MemUtils::ptnvec ptnsBhopcap =
	{
		{
			"HL-SteamPipe",
			{
				0xD9, 0x05, '?', '?', '?', '?', 0xBA, 0xFF, 0xFF, 0xFF, 0xFF, 0xD8, 0x89, '?', '?', '?', '?', 0xD9, 0xC9, 0x89, 0x91, '?', '?', '?', '?', 0xDF, 0xE9, 0x0F, 0x82
			},
			"xx????xxxxxxx????xxxx????xxxx"
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
		},

		{
			"CS-SteamPipe",
			{
				0x83, 0xEC, 0x10, 0xA1, '?', '?', '?', '?', 0x8B, 0x4C, 0x24, 0x14, 0x53, 0x56, 0x57, 0x33, 0xFF, 0x89, 0x48, 0x04, 0xE8, '?', '?', '?', '?', 0x8B, 0x15, '?', '?', '?', '?', 0x33, 0xC9, 0x89, 0xBA, 0x8C, 0x54, 0x04, 0x00, 0xA1, '?', '?', '?', '?', 0x8A, 0x88, 0x5A, 0x54, 0x04, 0x00, 0x89, 0x4C, 0x24, 0x20, 0xDB, 0x44, 0x24, 0x20, 0xDC, 0x0D
			},
			"xxxx????xxxxxxxxxxxxx????xx????xxxxxxxxx????xxxxxxxxxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsPM_ClipVelocity =
	{
		{
			"HL-SteamPipe",
			{
				0x8B, 0x4C, 0x24, 0x08, 0x53, 0x33, 0xDB, 0x56, 0xD9, 0x41, 0x08, 0xD8, 0x15, '?', '?', '?', '?', 0x57, 0xDF, 0xE0, 0x25, 0x00, 0x41, 0x00, 0x00, 0x75, 0x05, 0xBB, 0x01, 0x00, 0x00, 0x00, 0xD8, 0x1D, '?', '?', '?', '?', 0xDF, 0xE0, 0xF6, 0xC4, 0x44, 0x7A, 0x03, 0x83, 0xCB, 0x02
			},
			"xxxxxxxxxxxxx????xxxxxxxxxxxxxxxxx????xxxxxxxxxx"
		}
	};

	// Clientside patterns.
	const MemUtils::ptnvec ptnsAngleSpeedCap =
	{
		{
			"CS-SteamPipe",
			{
				0xDF, 0xE0, 0xF6, 0xC4, 0x05, 0x7B, 0x10, 0xD9, 0x41, 0x0C, 0xD8, 0x1D, '?', '?', '?', '?', 0xDF, 0xE0, 0xF6, 0xC4, 0x05, 0x7A, 0x1D, 0xD9, 0x41, 0x0C, 0xD8, 0x1D, '?', '?', '?', '?', 0xDF, 0xE0, 0xF6, 0xC4, 0x05, 0x7A, 0x08, 0xD9, 0x05, '?', '?', '?', '?', 0xEB, 0x0B, 0xD9, 0x41, 0x0C, 0xEB, 0x06, 0xD9, 0x05
			},
			"xxxxxxxxxxxx????xxxxxxxxxxxx????xxxxxxxxx????xxxxxxxxx"
		}
	};

	const MemUtils::ptnvec ptnsSpeedScaling =
	{
		{
			"CS-SteamPipe",
			{
				0xD9, 0xFA, 0xDD, 0xDB, 0xDD, 0xD8, 0xDD, 0xD8, 0xD8, 0x54, 0x24, 0x18, 0xDF, 0xE0, 0x25, 0x00, 0x41, 0x00, 0x00, 0x75, 0x1C, 0xD8, 0x7C, 0x24, 0x18, 0xD9, 0xC0, 0xD8, 0x4E, 0x10, 0xD9, 0x5E, 0x10, 0xD9, 0xC0, 0xD8, 0x4E, 0x14, 0xD9, 0x5E, 0x14, 0xD8, 0x4E, 0x18, 0xD9, 0x5E, 0x18, 0xEB, 0x02
			},
			"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		}
	};
}
