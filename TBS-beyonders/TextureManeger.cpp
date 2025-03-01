#include "TextureManeger.h"
#include <iostream>

SDL_Texture* TextureManeger::LoadTexture(const char* filename) {
	SDL_Surface* tmpSurface = IMG_Load(filename);
	if (!tmpSurface) {
		std::cout << "Erro ao carregar imagem: " << SDL_GetError() << std::endl;
	}
	SDL_Texture* tex = SDL_CreateTextureFromSurface(Game::renderer, tmpSurface);
	SDL_DestroySurface(tmpSurface);

	return tex;
}

void TextureManeger::Draw(SDL_Texture* tex, SDL_FRect src, SDL_FRect dest)
{
	SDL_RenderTexture(Game::renderer, tex, &src, &dest);
}
