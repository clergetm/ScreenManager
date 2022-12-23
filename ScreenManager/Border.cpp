#include "Border.h"

namespace ScreenManager {
	namespace Border {

		/// <summary>
		/// Draw a horizontal line.
		/// </summary>
		/// <param name="l"> Length of the line.</param>
		void draw_simple_horizontal_line(short l) {
			for (short i = 0; i < l; i++) {
				cout << simple_b::h_line;
			}
		}
	}
}