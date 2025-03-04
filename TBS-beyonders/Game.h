#ifndef Game_h
#define Game_h

#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <stdio.h>

class Game
{
public:
	Game();
	~Game();

	void init(const char* title, int x, int y, int width, int height, bool full);

	void handleEvents();
	void update();
	void render();
	void clean();

	bool running() const { return isRunning; }

	static SDL_Renderer* renderer;

private:
	int cnt = 0;
	bool isRunning;
	SDL_Window* win;
};


#endif