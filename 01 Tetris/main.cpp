#include <time.h>
#include <SFML/Graphics.hpp>
#include "TetrisGame.hpp"

int
main()
{
  srand(time(0));
  TetrisGame main_tetris_game;

  while (main_tetris_game.GetWindow()->isOpen()) 
  {
	  main_tetris_game.GameLoop();  
  }

  return 0;
}