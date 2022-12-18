#include "Screen.h"

using namespace std;

namespace ScreenManager {
	namespace Screen {
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

	}
}