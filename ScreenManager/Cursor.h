#pragma once
#include <tuple>
#include <Windows.h>

using namespace std;
namespace ScreenManager {

	/// <summary>
	/// Namespace for cursor related methods.
	/// </summary>
	namespace Cursor {
		typedef tuple<short, short> coordinates;
		coordinates get_coordinates();		// Getter of coordinates.

	}
}
