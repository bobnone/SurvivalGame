#include "Game.h"

int main()
{
	Game game;
	if(game.Initialize())
	{
		game.RunLoop();
	}
	game.Shutdown();
	return 0;
}