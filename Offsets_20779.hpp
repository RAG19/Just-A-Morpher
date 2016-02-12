/**
	@file Offsets.hpp
	@brief Declares offsets.
*/

#pragma once

namespace JustAMorpher
{
	namespace Offsets
	{
		namespace Functions
		{
			enum : size_t
			{
				CGUnit_C__UpdateDisplayInfo = 0x33D3C3,
				CGUnit_C__OnMountDisplayChanged = 0x33BB9A,
				CGUnit_C__UpdateScale = 0x33B3E1,

				GetUnitFromName = 0x3BDD66,
				FrameScript__InvalidPtrCheck = 0xEF9E7,
				CGGameUI__Initialize = 0x99A93B,

				FrameScript__RegisterFunction = 0x26B6B,
				FrameScript__ExecuteBuffer = 0x273EE,
				lua_gettop = 0xB52B4,
				luaD_error = 0xB6870,
				lua_tolstring = 0xB5837,
				lua_tonumber = 0xB577B,
				lua_pushnumber = 0xB597C,
			};
		}

		namespace Globals
		{
			enum : size_t
			{

			};
		}

		namespace Object
		{
			enum : size_t
			{
				Descriptors = 0x4,
				
				GUID = 0x0,
				Scale = 0x2C,
			};
		}

		namespace Unit
		{
			enum : size_t
			{
				MountDisplayID = 0x1A8,

				Race = 0x184C,
				Gender = 0xE4,
				DisplayID = 0x1A0,
				NativeDisplayID = 0x1A4,
				ItemDisplayIDs = 0xC38,
			};
		}
	}
}
