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
		string move_up(short);					// Move the cursor up by a number of lines.
		string move_down(short);				// Move the cursor down by a number of lines.
		string move_forward(short);				// Move the cursor forward by a number of lines.

	}
}
