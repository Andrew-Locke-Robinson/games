#ifndef GAMECLOCK_HPP
#define GAMECLOCK_HPP

#include <SFML/Graphics.hpp>

class GameClock
{
public:
	void Update();

	sf::Clock clock;
	float timer = 0, delay = 0.3f;
};

#endif