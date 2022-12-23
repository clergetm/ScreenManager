#pragma once
#include <string>
#include <Windows.h>
#include "ScreenManager.h"

using namespace std;
using namespace ScreenManager;
namespace ScreenManager {

	/// <summary>
	/// Namespace for cursor related methods.
	/// </summary>
	namespace Cursor {
		coordinates get_coordinates();			// Getter of coordinates.
		string set_coordinates(short, short);	// Setter of coordinates with x and y.
		string set_coordinates(coordinates);	// Setter of coordinates with tuple.
		string move_up(short);					// Move the cursor up by a number of lines.
		string move_down(short);				// Move the cursor down by a number of lines.
		string move_forward(short);				// Move the cursor forward by a number of lines.
		string move_backward(short);			// Move the cursor backward by a number of lines.
		void cout_on_pos(short, short, string);	// Set the coordinates with x and y and write the given message.
		void cout_on_pos(coordinates, string);	// Set the coordinates with tuple and write the given message.

	}
}
