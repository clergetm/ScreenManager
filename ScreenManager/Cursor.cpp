#include "Cursor.h"

namespace ScreenManager {
	namespace Cursor {
		/// <summary>
		/// Getter of coordinates.
		/// </summary>
		/// <returns>Get a tuple of coordinates (x, y).</returns>
		coordinates get_coordinates() {
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
			return make_tuple(csbi.dwCursorPosition.X, csbi.dwCursorPosition.Y);
		}

		/// <summary>
		/// Set the coordinates of the cursor with x and y.
		/// </summary>
		/// <param name="x">value on x axis.</param>
		/// <param name="y">value on y axis</param>
		/// <returns>The ANSI Sequence to set the coordinates</returns>
		string set_coordinates(short x, short y) {
			return "\033[" + to_string(x+1) + ";" + to_string(y+1) + "H";
		}

		/// <summary>
		/// Set the coordinates of the cursor with a tuple.
		/// </summary>
		/// <param name="c"> a tuple of coordinates (x, y)</param>
		/// <returns>The ANSI Sequence to set the coordinates</returns>
		string set_coordinates(coordinates c) {
			return "\033[" + to_string(get<0>(c)+1) + ";" + to_string(get<1>(c)+1) + "H";
		}


	}
}
