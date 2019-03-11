#include "GameClock.hpp"

void GameClock::Update()
{
	float time = clock.getElapsedTime().asSeconds();
	clock.restart();
	timer += time;
}
