#include "Cursor.h"
#include <assert.h>
#include <iostream>

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
		/// <param name="x">The value on x axis.</param>
		/// <param name="y">The value on y axis.</param>
		/// <returns>The ANSI Sequence code to set the coordinates.</returns>
		string set_coordinates(short x, short y) {
			assert(x >= 0);
			assert(y >= 0);
			return ESC + "[" + to_string(y) + ";" + to_string(x) + "H";
		}

		/// <summary>
		/// Set the coordinates of the cursor with a tuple.
		/// </summary>
		/// <param name="c">A tuple of coordinates (x, y).</param>
		/// <returns>The ANSI Sequence code to set the coordinates.</returns>
		string set_coordinates(coordinates c) {
			return set_coordinates(get<0>(c), get<1>(c));
		}

		/// <summary>
		/// Move the cursor up by a number of lines.
		/// </summary>
		/// <param name="l">The number of lines.</param>
		/// <returns>The ANSI Sequence code to move the cursor up.</returns>
		string move_up(short l) {
			assert(l >= 0);
			return ESC + "[" + to_string(l) + "A";
		}	

		/// <summary>
		/// Move the cursor down by a number of lines.
		/// </summary>
		/// <param name="l">The number of lines.</param>
		/// <returns>The ANSI Sequence code to move the cursor down.</returns>
		string move_down(short l) {
			assert(l >= 0);
			return ESC + "[" + to_string(l) + "B";
		}

		/// <summary>
		/// Move the cursor forward by a number of lines.
		/// </summary>
		/// <param name="l">The number of lines.</param>
		/// <returns>The ANSI Sequence codeto move the cursor forward.</returns>
		string move_forward(short l) {
			assert(l >= 0);
			return ESC + "[" + to_string(l) + "C";
		}

		/// <summary>
		/// Move the cursor backward by a number of lines.
		/// </summary>
		/// <param name="l">The number of lines.</param>
		/// <returns>The ANSI Sequence code to move the cursor backward.</returns>
		string move_backward(short l) {
			assert(l >= 0);
			return ESC + "[" + to_string(l) + "D";
		}

		/// <summary>
		/// Set the coordinates with x and y and write the given message.
		/// </summary>
		/// <param name="x">The value on x axis.</param>
		/// <param name="y">The Value on y axis.</param>
		/// <param name="m">The message to print.</param>
		void cout_on_pos(short x, short y, string m) {
			cout << set_coordinates(x, y) << m;
		}

		/// <summary>
		/// Set the coordinates with tuple and write the given message.
		/// </summary>
		/// <param name="c">A tuple of coordinates (x, y).</param>
		/// <param name="m">The message to print.</param>
		void cout_on_pos(coordinates c, string m) {
			cout << set_coordinates(c) << m;
		}

	}

}
