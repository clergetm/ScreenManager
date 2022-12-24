#include <iostream>
#include "Cursor.h"
#include "Border.h"
#include "Terminal.h"

/// <summary>
/// Move down the cursor to avoid overlapping the example with ending message.
/// </summary>
void pause() {
	cout << Cursor::set_coordinates(0, Terminal::y() - 1);
	system("pause");
}

void first() {
	// Change the title
	cout << Terminal::set_title("First test");

	// Draw horizontal lines
	for (short i = 1; i < 10; i++) {
		short sht = 2 * i;		// short
		short lng = 20 - sht;	// long

		cout << Cursor::set_coordinates(2, i);
		Border::draw_simple_horizontal_line(sht);

		std::cout << Cursor::set_coordinates(Terminal::x() - lng - 1, i);
		Border::draw_double_horizontal_line(lng);

		cout << Cursor::set_coordinates(2, 10 + i);
		Border::draw_double_horizontal_line(lng);

		cout << Cursor::set_coordinates(Terminal::x() - sht - 1, 10 + i);
		Border::draw_simple_horizontal_line(sht);

	}

	// Draw vertical lines
	cout << Cursor::set_coordinates(0, 0); // set_coordinates(1, 1); same effect
	Border::draw_double_vertical_line(20);
	cout << Cursor::set_coordinates(Terminal::x(), 0);
	Border::draw_double_vertical_line(20);

	// Cout message in the middle.
	Cursor::cout_on_pos(40, 10, "Hello, world!");

	pause(); 

}

void second() {

	for (short x = 5; x < Terminal::x(); x++) {
		Border::draw_simple_border(x % 5, x % 5, x, 10);

		Border::draw_double_border(x % 5, x % 5 + 15, x, 25);

		Sleep(50);
		cout << Terminal::clear();
	}
	pause();
}


int main() {
	second();
	return 0;
}