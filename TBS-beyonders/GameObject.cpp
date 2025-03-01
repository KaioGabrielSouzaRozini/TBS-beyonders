#include "GameObject.h"
#include "TextureManeger.h"

GameObject::GameObject(const char* texturesheet, int x, int y) {
	objTexture = TextureManeger::LoadTexture(texturesheet);
	xpos = x;
	ypos = y;
}

void GameObject::Update(int srcRectX, int srcRectY) {

	xpos++;
	ypos++;

	srcRect.h = 48;
	srcRect.w = 64;
	srcRect.x = srcRectX;
	srcRect.y = srcRectY;

	destRect.x = xpos;
	destRect.y = ypos;
	destRect.h = srcRect.h * 2;
	destRect.w = srcRect.w * 2;

}

void GameObject::Render() {

	// remember to change NULL for &srcRect with the image width
	SDL_RenderTexture(Game::renderer, objTexture, &srcRect, &destRect);
}
