#include "Game.h"
#include "TextureManeger.h"
#include "GameObject.h"
#include "Map.h"
#include <iostream>

GameObject* unit1;
GameObject* unit2;
Map* map;

SDL_Renderer* Game::renderer = nullptr;

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
	unit1 = new GameObject("Assets/soldier1.png", 0, 0);
	unit2 = new GameObject("Assets/soldier1.png", 100, 50);

	map = new Map();
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
	unit1->Update();
	unit2->Update();

}

void Game::render() {

	SDL_RenderClear(renderer);
	map->DrawMap();
	unit1->Render();
	unit2->Render();
	SDL_RenderPresent(renderer);
}

void Game::clean() {
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(win);

	SDL_Quit();
	std::cout << "Game clean!" << std::endl;
}