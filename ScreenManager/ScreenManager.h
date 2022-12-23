#pragma once
#include <string>
#include <tuple>

using namespace std;
namespace ScreenManager {
	typedef tuple<short, short> coordinates;	// Tuple of coordinates.
	const string ESC = "\033";					// Escape ANSI Code.
}