#pragma once

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

	}
}
