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
				CGUnit_C__UpdateDisplayInfo = 0x423AE2,
				CGUnit_C__OnMountDisplayChanged = 0x4238D1,
				CGUnit_C__UpdateScale = 0x41A209,

				GetUnitFromName = 0x49420A,
				FrameScript__InvalidPtrCheck = 0x10C021,
				CGGameUI__Initialize = 0x8BAFAF,

				FrameScript__RegisterFunction = 0x4EAB6,
				FrameScript__ExecuteBuffer = 0x4F9EC,
				lua_gettop = 0xD13F9,
				luaD_error = 0xD299B,
				lua_tolstring = 0xD1979,
				lua_tonumber = 0xD18C0,
				lua_pushnumber = 0xD1ABE,
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
