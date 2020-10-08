#include <ncurses.h>
#include <pybind11/pybind11.h>

void game()
{
    initscr();                  // start ncurses mode
    printw("Hello, snek!");     // print hello world
    refresh();                  // print it on the real screen
    getch();                    // wait for user input
    endwin();                   // end ncurses mode
}

PYBIND11_MODULE(_onix, m) {
    m.doc() = "Actually a snek!";
    m.def("game", &game, "The game function");
}
