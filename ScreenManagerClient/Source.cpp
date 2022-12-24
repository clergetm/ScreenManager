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

void third() {
	cout << Terminal::set_title("GAME EXAMPLE");
	// Global border
	Border::draw_double_border(make_tuple(0, 0), Terminal::get_size());

	// Drawing Top line
	cout << Cursor::set_coordinates(2, 5);
	Border::draw_double_horizontal_line(Terminal::x() - 2);


	// Adding Top texts
	Cursor::cout_on_pos(2, 2, "Name: toto");
	Cursor::cout_on_pos(2, 3, "Age: 21");
	Cursor::cout_on_pos(2, 4, "Occupation: IT Student");

	// Adding left separation
	cout << Cursor::set_coordinates(20, 6);
	Border::draw_simple_vertical_line(Terminal::y()-5);

	// Adding Left texts
	Cursor::cout_on_pos(3, 6, "Quests");
	Cursor::cout_on_pos(3, 7, "- (1) Go to Uni.");
	Cursor::cout_on_pos(3, 8, "- (2) Eat lunch.");

	// From https://www.asciiart.eu/computers/computers
	short x = 22;
	short y = 6;
	cout_on_pos(x, y++, "                         | ___  o|");
	cout_on_pos(x, y++, "                         |[_-_]_ |");
	cout_on_pos(x, y++, "      ______________     |[_____]|");
	cout_on_pos(x, y++, "     |.------------.|    |[_____]|");
	cout_on_pos(x, y++, "     ||            ||    |[====o]|");
	cout_on_pos(x, y++, "     ||            ||    |[_.--_]|");
	cout_on_pos(x, y++, "     ||            ||    |[_____]|");
	cout_on_pos(x, y++, "     ||            ||    |      :|");
	cout_on_pos(x, y++, "     ||____________||    |      :|");
	cout_on_pos(x, y++, " .==.|\"\"  ......    |.==.|      :|");
	cout_on_pos(x, y++, " |::| '-.________.-' |::||      :|");
	cout_on_pos(x, y++, " |''|  (__________)-.|''||______:|");
	cout_on_pos(x, y++, " `\"\"`_.............._\"\"`______");
	cout_on_pos(x, y++, "    /:::::::::::'':::\\`;'-.-.  `\\");
	cout_on_pos(x, y++, "   /::=========.:.-::\"\\ \\ \\--\\   \\");
	cout_on_pos(x, y++, "   \\`\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"`/  \\ \\__)   \\");
	cout_on_pos(x, y++, "    `\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"`    '========'");

	// https://www.asciiart.eu/cartoons/other
	x = 62;
	y = 6;
	cout_on_pos(x, y++, "           _  .   .   .");
	cout_on_pos(x, y++, "         .' '; '-' '-'|-.");
	cout_on_pos(x, y++, "        (     '------.'  )");
	cout_on_pos(x, y++, "         ;            \\ /");
	cout_on_pos(x, y++, "          :     '   ' |/");
	cout_on_pos(x, y++, "          '._._       \\    .;");
	cout_on_pos(x, y++, "         .-'   ;--.    '--' /");
	cout_on_pos(x, y++, "        /      \\-'---.___.'");
	cout_on_pos(x, y++, "       |     / 7 \\(>o<) /\\");
	cout_on_pos(x, y++, "       |     | \\ |  . \\   \\");
	cout_on_pos(x, y++, "       |=====|   |  .  \\ |-)");
	cout_on_pos(x, y++, "        |-'-'   ./_.-._.\\|\"");
	cout_on_pos(x, y++, "        '-.----'        |");
	cout_on_pos(x, y++, "          |       |     |");
	cout_on_pos(x, y++, "          |     | |   | |");
	cout_on_pos(x, y++, "          |_____|_|___|_|");
	cout_on_pos(x, y++, "          (-------',----'.");
	cout_on_pos(x, y++, "           '-'-----'-----'");



	// Draw right part
	cout_on_pos(98, 26, "Your choice:");
	
	Border::draw_simple_border(101, 27, 106, 29);
	cout << Cursor::set_coordinates(101, 27) << Border::simple_b::cross
		<<  Cursor::move_down(2) << move_backward(1) << Border::simple_b::cross
		<< Cursor::move_forward(4) << Border::simple_b::cross
		<< Cursor::move_up(2) << move_backward(1) << Border::simple_b::cross;
	pause();
}


int main() {
	third();
	return 0;
}