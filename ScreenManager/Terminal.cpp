#include "Terminal.h"

namespace ScreenManager {

	namespace Terminal {

		/// <summary>
		/// Get the width of the terminal.
		/// </summary>
		/// <returns>The width.</returns>
		short get_width() {
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
			return csbi.srWindow.Right - csbi.srWindow.Left + 1;
		}

		/// <summary>
		/// Get the height of the terminal.
		/// </summary>
		/// <returns>The height.</returns>
		short get_height() {
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
			return csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
		}

		/// <summary>
		/// Get current width and height.
		/// </summary>
		/// <returns>The width and height as the max coordinates of the terminal.</returns>
		coordinates get_size() {
			return make_tuple(get_width(), get_height());
		}

		/// <summary>
		/// Set the title of the terminal.
		/// </summary>
		/// <param name="title">The title.</param>
		/// <returns>The ANSI Sequence code to set the title.</returns>
		string set_title(string title) {
			return ESC + "]0;" + title + "\x07"; // \x07 = ending char.
		}

		/// <summary>
		/// Go back to (0, 0) and clear the terminal.
		/// </summary>
		/// <returns>The ANSI Sequence code to clear the terminal.</returns>
		string clear() {
			return 
				ESC + "[H"+		// Moves cursor to home position (0, 0).
				ESC + "[2J";	// Erase entire screen.
		}

	}

}