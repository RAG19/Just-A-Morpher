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
				CGUnit_C__UpdateDisplayInfo = 0x42EC88,
				CGUnit_C__OnMountDisplayChanged = 0x42EA73,
				CGUnit_C__UpdateScale = 0x4253C3,

				GetUnitFromName = 0x4A04DB,
				FrameScript__InvalidPtrCheck = 0x110C83,
				CGGameUI__Initialize = 0x8D378C,

				FrameScript__RegisterFunction = 0x4F2B7,
				FrameScript__ExecuteBuffer = 0x50236,
				lua_gettop = 0xD64F0,
				luaD_error = 0xD7A92,
				lua_tolstring = 0xD6A70,
				lua_tonumber = 0xD69B7,
				lua_pushnumber = 0xD6BB5,
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
				ItemDisplayIDs = 0xC04, //or E64
			};
		}
	}
}
