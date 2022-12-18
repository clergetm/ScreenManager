#pragma once
#include <Windows.h>
namespace ScreenManager {
	
	/// <summary>
	/// Namespace for screen related methods.
	/// </summary>
	namespace Screen {
		
		// https://stackoverflow.com/a/23370070
		int get_width();			// Get current Witdh.
		const auto x = get_width;	// Alias of get_witdh.
		int get_height();			// Get current Height.
		const auto y = get_height;	// Alias pf get_height.

	}
}