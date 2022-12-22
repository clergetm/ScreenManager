#pragma once
#include <fcntl.h>
#include <io.h>
#include <stdio.h>

using namespace std;

namespace ScreenManager {
	// https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/setmode?view=msvc-170

	/// <summary>
	/// Setup the terminal to print special characters.
	/// </summary>
	inline void setup() {
		if (_setmode(_fileno(stdout), _O_U8TEXT) == -1) { // UTF-8
			perror("Cannot set mode");
		}
	}

	/// <summary>
	/// Undo the setup of the ScreenManager.
	/// </summary>
	inline void undo_setup() {
		if (_setmode(_fileno(stdout), _O_TEXT) == -1) { // Text
			perror("Cannot set mode");
		}
	}
}