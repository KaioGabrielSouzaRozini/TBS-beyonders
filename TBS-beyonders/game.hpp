#ifndef GAME_HPP
#define GAME_HPP

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

class Game {
public:
	Game();
	~Game();

	bool init();         
	void run();          
	void cleanup();

private:
	SDL_Window* win;
	SDL_Renderer* renderer;
	SDL_Texture* bitmapTex;
	SDL_Surface* bitmapSurface;
	int width, height;
	bool loopShouldStop;
};

#endif 