#ifndef TETRISGAME_HPP
#define TETRISGAME_HPP

#include <SFML/Graphics.hpp>
#include "GameClock.hpp"

struct point {
	int x;
	int y;
};

class TetrisGame
{
public:
	TetrisGame();
	~TetrisGame();

	void GameLoop();
	bool check();
	const sf::RenderWindow* GetWindow() const { return window; }

private:
	GameClock GameClock_;
	int figures[7][4] = {
  1, 3, 5, 7, // I
  2, 4, 5, 7, // Z
  3, 5, 4, 6, // S
  3, 5, 4, 7, // T
  2, 3, 5, 7, // L
  3, 5, 7, 6, // J
  2, 3, 4, 5, // O
	};

	point PlayerTetromino_[4], PlaceHolderTetromino_[4];
	sf::RenderWindow* window;
	sf::Texture t1, t2, t3;
	sf::Sprite s, background, frame;

	const static int M = 20;
	const static int N = 10;

	int dx = 0;
	bool rotate = 0;
	int colorNum = 1;

	int field[M][N] = { 0 };
};
#endif