#include "Terminal.h"

using namespace std;

namespace ScreenManager {
	namespace Terminal {
		/// <summary>
		/// Get the width of the console.
		/// </summary>
		/// <returns>The width</returns>
		int get_width() {
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
			return csbi.srWindow.Right - csbi.srWindow.Left + 1;
		}

		/// <summary>
		/// Get the height of the console.
		/// </summary>
		/// <returns>The height</returns>
		int get_height() {
			CONSOLE_SCREEN_BUFFER_INFO csbi;
			GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
			return csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
		}

		/// <summary>
		/// Set the title of the Terminal.
		/// </summary>
		/// <param name="title">The title.</param>
		/// <returns>The ANSI Sequence to set the title.</returns>
		string set_title(string title) {
			return ESC + "]0;" + title + "\x07";
		}

		/// <summary>
		/// Go back to (0, 0) and clear the terminal.
		/// </summary>
		/// <returns>The ANSI Sequence to clear the terminal.</returns>
		string clear() {
			return 
				ESC + "[H"+	// Moves cursor to home position (0, 0).
				ESC + "[2J";	// Erase entire screen.
		}
	}
}