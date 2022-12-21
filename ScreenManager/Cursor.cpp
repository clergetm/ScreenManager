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

	}
}
