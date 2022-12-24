#include <assert.h>
#include "Border.h"

namespace ScreenManager {

	namespace Border {

		/// <summary>
		/// Draw a simple border horizontal line.
		/// </summary>
		/// <param name="l">The length of the line.</param>
		void draw_simple_horizontal_line(short l) {
			assert(l > 0);
			for (short i = 0; i < l; i++) {
				cout << simple_b::h_line;
			}
		}

		/// <summary>
		/// Draw a simple border vertical line.
		/// </summary>
		/// <param name="l">The length of the line.</param>
		void draw_simple_vertical_line(short l) {
			assert(l > 0);
			short x = get<0>(get_coordinates());
			short y = get<1>(get_coordinates());

			for (short i = 0; i < l; i++) {
				cout << simple_b::v_line << set_coordinates(x + 1, y + i + 1);
			}
		}

		/// <summary>
		/// Draw a rectangle between two points with a simple line.
		/// </summary>
		/// <param name="x">x of starting point.</param>
		/// <param name="y">y of starting point.</param>
		/// <param name="end_x">x of ending point.</param>
		/// <param name="end_y">y of ending point.</param>
		void draw_simple_border(short x, short y, short end_x, short end_y) {
			assert(x >= 0);
			assert(y >= 0);
			assert(end_x > 0);
			assert(end_y > 0);
			assert(x < end_x);
			assert(y < end_y);

			// Left vertical line.
			cout << set_coordinates(x, y + 1);
			draw_simple_vertical_line(end_y - y);

			// Right vertical line.
			cout << set_coordinates(end_x, y + 1);
			draw_simple_vertical_line(end_y - y);

			// Top horizontal line.
			cout << set_coordinates(x, y);
			draw_simple_horizontal_line(end_x - x);

			// Bottom horizontal line.
			cout << set_coordinates(x, end_y);
			draw_simple_horizontal_line(end_x - x);


			// Corners
			cout << set_coordinates(x, y) << simple_b::top_left_corner
				<< set_coordinates(end_x, y) << simple_b::top_right_corner
				<< set_coordinates(x, end_y) << simple_b::bottom_left_corner
				<< set_coordinates(end_x, end_y) << simple_b::bottom_right_corner;

		}

		/// <summary>
		/// Draw a rectangle between two coordinates with a simple line.
		/// </summary>
		/// <param name="start">Starting coordinates.</param>
		/// <param name="end">Ending coordinates.</param>
		void draw_simple_border(coordinates start, coordinates end) {
			draw_simple_border(get<0>(start), get<1>(start), get<0>(end), get<1>(end));
		}

		/// <summary>
		/// Draw a double border horizontal line.
		/// </summary>
		/// <param name="l">The length of the line.</param>
		void draw_double_horizontal_line(short l) {
			assert(l > 0);
			for (short i = 0; i < l; i++) {
				cout << double_b::h_line;
			}
		}

		/// <summary>
		/// Draw a double border vertical line.
		/// </summary>
		/// <param name="l">The length of the line.</param>
		void draw_double_vertical_line(short l) {
			assert(l > 0);
			short x = get<0>(get_coordinates());
			short y = get<1>(get_coordinates());

			for (short i = 0; i < l; i++) {
				cout << double_b::v_line << set_coordinates(x + 1, y + i + 1);
			}
		}

		/// <summary>
		/// Draw a rectangle between two points with a double line.
		/// </summary>
		/// <param name="x">x of starting point.</param>
		/// <param name="y">y of starting point.</param>
		/// <param name="end_x">x of ending point.</param>
		/// <param name="end_y">y of ending point.</param>
		void draw_double_border(short x, short y, short end_x, short end_y) {
			assert(x >= 0);
			assert(y >= 0);
			assert(end_x > 0);
			assert(end_y > 0);
			assert(x < end_x);
			assert(y < end_y);

			// Left vertical line.
			cout << set_coordinates(x, y + 1);
			draw_double_vertical_line(end_y - y);

			// Right vertical line.
			cout << set_coordinates(end_x, y + 1);
			draw_double_vertical_line(end_y - y);

			// Top horizontal line.
			cout << set_coordinates(x, y);
			draw_double_horizontal_line(end_x - x);

			// Bottom horizontal line.
			cout << set_coordinates(x, end_y);
			draw_double_horizontal_line(end_x - x);


			// Corners
			cout << set_coordinates(x, y) << double_b::top_left_corner
				<< set_coordinates(end_x, y) << double_b::top_right_corner
				<< set_coordinates(x, end_y) << double_b::bottom_left_corner
				<< set_coordinates(end_x, end_y) << double_b::bottom_right_corner;
		}

		/// <summary>
		/// Draw a rectangle between two coordinates with a double line.
		/// </summary>
		/// <param name="start">Starting coordinates.</param>
		/// <param name="end">Ending coordinates.</param>
		void draw_double_border(coordinates start, coordinates end) {
			draw_double_border(get<0>(start), get<1>(start), get<0>(end), get<1>(end));
		}

	}

}