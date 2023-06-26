#include <iostream>
#include <ncurses.h>

#include "src/game.hpp"

int main() {
  initscr();
  curs_set(0);

  Game game;
  game.init();

  while (true) {
    game.update();
    game.render();
    getch();
  }

  endwin();
  return 0;
}
