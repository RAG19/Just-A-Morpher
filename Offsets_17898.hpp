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
				CGUnit_C__UpdateDisplayInfo = 0x42E3A8,
				CGUnit_C__OnMountDisplayChanged = 0x42E193,
				CGUnit_C__UpdateScale = 0x424AE3,

				GetUnitFromName = 0x0049FAFF,
				FrameScript__InvalidPtrCheck = 0x001108E3,
				CGGameUI__Initialize = 0x008D3521,

				FrameScript__RegisterFunction = 0x0004EEF2,
				FrameScript__ExecuteBuffer = 0x0004FE71,
				lua_gettop = 0x00D610D,
				luaD_error = 0x000D76AF,
				lua_tolstring = 0x000D668D,
				lua_tonumber = 0x000D65D4,
				lua_pushnumber = 0x000D67D2,
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
				Descriptors = 0x04,
				
				GUID = 0x0,
				Scale = 0x1C,
			};
		}

		namespace Unit
		{
			enum : size_t
			{
				MountDisplayID = 0x11C,

				Race = 0x5C,
				Gender = 0x78,
				DisplayID = 0x114,
				NativeDisplayID = 0x118,
				ItemDisplayIDs = 0x28,
			};
		}
	}
}
