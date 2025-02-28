#include "GameObject.h"
#include "TextureManeger.h"

GameObject::GameObject(const char* texturesheet, SDL_Renderer* ren, int x, int y) {
	renderer = ren;
	objTexture = TextureManeger::LoadTexture(texturesheet, renderer);
	xpos = x;
	ypos = y;
}

void GameObject::Update() {

	xpos++;
	ypos++;

	srcRect.h = 48;
	srcRect.w = 64;
	srcRect.x = 1;
	srcRect.y = 1;

	destRect.x = xpos;
	destRect.y = ypos;
	destRect.h = srcRect.h * 2;
	destRect.w = srcRect.w * 2;

}

void GameObject::Render() {

	// remember to change NULL for &srcRect with the image width
	SDL_RenderTexture(renderer, objTexture, &srcRect, &destRect);
}
