#include "TextureManeger.h"
#include <iostream>

SDL_Texture* TextureManeger::LoadTexture(const char* filename, SDL_Renderer* ren) {
	SDL_Surface* tmpSurface = IMG_Load(filename);
	if (!tmpSurface) {
		std::cout << "Erro ao carregar imagem: " << SDL_GetError() << std::endl;
	}
	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tmpSurface);
	SDL_DestroySurface(tmpSurface);

	return tex;
}