#pragma once
#include <iostream>
#include "Cursor.h"

using namespace std;
using namespace ScreenManager::Cursor;
namespace ScreenManager {
	/// <summary>
	/// Namespace for border related methods.
	/// </summary>
	namespace Border {

		/// <summary>
		/// Enumeration of ascii characters used to draw a simple border.
		/// </summary>
		enum class simple_b : char {
			v_line = char(179),
			h_line = char(196),
			center_left = char(180),
			center_right = char(195),
			center_top = char(193),
			center_bottom = char(194),
			cross = char(197),
			top_left_corner = char(218),
			top_right_corner = char(191),
			bottom_left_corner = char(192),
			bottom_right_corner = char(217),
		};

		/// <summary>
		/// Override the << operator.
		/// </summary>
		/// <param name="_out">stdout.</param>
		/// <param name="c">the simple_b enumeration variable.</param>
		/// <returns></returns>
		inline ostream& operator<< (ostream& _out,const simple_b& c) {
			_out << static_cast<char>(c);
			return _out;
		}
		
		void draw_simple_horizontal_line(short);				// Simple border horizontal line.
		void draw_simple_vertical_line(short);					// Simple border vertical line.
		void draw_simple_border(short, short, short, short);	// Simple border rectangle.
		void draw_simple_border(coordinates, coordinates);		// Simple border rectangle with coordinates tuples.

		/// <summary>
		/// Enumeration of ascii characters used to draw a double border.
		/// </summary>
		enum class double_b : char {
			v_line = char(186),
			h_line = char(205),
			center_left = char(185),
			center_right = char(204),
			center_top = char(202),
			center_bottom = char(203),
			cross = char(206),
			top_left_corner = char(201),
			top_right_corner = char(187),
			bottom_left_corner = char(200),
			bottom_right_corner = char(188),
		};

		/// <summary>
		/// Override the << operator.
		/// </summary>
		/// <param name="_out">stdout.</param>
		/// <param name="c">the double_b enumeration variable.</param>
		/// <returns></returns>
		inline ostream& operator<< (ostream& _out, const double_b& c) {
			_out << static_cast<char>(c);
			return _out;
		}

	}
}
