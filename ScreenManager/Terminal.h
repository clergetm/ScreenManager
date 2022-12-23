#pragma once
#include <Windows.h>
#include <string>
#include "ScreenManager.h"

using namespace std;
using namespace ScreenManager;

namespace ScreenManager {
	
	/// <summary>
	/// Namespace for Terminal related methods.
	/// </summary>
	namespace Terminal {
		
		// https://stackoverflow.com/a/23370070
		short get_width();			// Get current Width.
		const auto x = get_width;	// Alias of get_witdh.
		short get_height();			// Get current Height.
		const auto y = get_height;	// Alias of get_height.
		coordinates get_size();		// Get current Width and Height.
		string set_title(string);	// Set the title.
		string clear();				// Clear the terminal.

	}
}