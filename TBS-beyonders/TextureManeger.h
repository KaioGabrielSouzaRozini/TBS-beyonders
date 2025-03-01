#pragma once

#include "Game.h"

class TextureManeger
{
public:
	static SDL_Texture* LoadTexture(const char* filename);
	static void Draw(SDL_Texture* tex, SDL_FRect src, SDL_FRect dest);
};

