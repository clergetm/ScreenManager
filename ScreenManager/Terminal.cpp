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
		/// Go back to (0, 0) and clear the terminal.
		/// </summary>
		/// <returns>The ANSI Sequence to clear the terminal.</returns>
		string clear() {
			return 
				"\033[H"	// Moves cursor to home position (0, 0).
				"\033[2J";	// Erase entire screen.
		}
	}
}