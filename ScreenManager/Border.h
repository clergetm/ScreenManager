#pragma once
#include <iostream>

using namespace std;
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
		
		void draw_simple_horizontal_line(short);	// Horizontal line simple border.
	}
}
