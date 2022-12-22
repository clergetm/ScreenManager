#pragma once
#include <tuple>
#include <string>
#include <Windows.h>

using namespace std;
namespace ScreenManager {

	/// <summary>
	/// Namespace for cursor related methods.
	/// </summary>
	namespace Cursor {
		typedef tuple<short, short> coordinates;
		coordinates get_coordinates();			// Getter of coordinates.
		string set_coordinates(short, short);	// Setter of coordinates with x and y.
		string set_coordinates(coordinates);	// Setter of coordinates with tuple.

	}
}
