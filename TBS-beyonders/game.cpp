#include "Game.h"
#include "TextureManeger.h"
#include <iostream>
#define IMG_GetError 

SDL_Texture* cityText;
SDL_FRect srcR, destR;

Game::Game() {

}

Game::~Game() {}

void Game::init(const char* title, int x, int y, int width, int height, bool full) {

	int flags = 0;
	if (full) {
		flags = SDL_WINDOW_FULLSCREEN;
	}
	if (SDL_Init(SDL_INIT_VIDEO)) {
		std::cout << "sdl iniciado!" << std::endl;

		win = SDL_CreateWindow(title, width, height, flags);

		if (win) {
			std::cout << "window create!" << std::endl;
		}

		renderer = SDL_CreateRenderer(win, NULL);

		if (renderer) {
			SDL_SetRenderDrawColor(renderer, 0xff, 0xff, 0xff, 0xff);
			std::cout << "renderer create!" << std::endl;
		}

		isRunning = true;
	}
	else {
		isRunning = false;
	}
	cityText = TextureManeger::LoadTexture("Assets/malchikrpg.png", renderer);
}

void Game::handleEvents() {
	SDL_Event event;
	SDL_PollEvent(&event);

	switch (event.type) {

	case SDL_EVENT_QUIT:
		isRunning = false;
		break;

	default:
		break;
	}
}

void Game::update() {
	cnt++;
	destR.h = 84;
	destR.w = 64;
	destR.x++;
	destR.y++;
	std::cout << cnt << std::endl;
}

void Game::render() {

	SDL_RenderClear(renderer);
	SDL_RenderTexture(renderer, cityText, NULL, &destR);
	SDL_RenderPresent(renderer);
}

void Game::clean() {
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(win);

	SDL_Quit();
	std::cout << "Game clean!" << std::endl;
}