#include <stdio.h>

int spriteNumberY = 0;
int spriteNumberX = 0;

const char *SpriteSheet[2][3] = {

	{"brick_path.png", "wood_path.png", "metal_path.png"},
	{"marble_path.png", "mud_path.png", "grass_path.png"}

};

void chooseSprite(int y, int x) {
	spriteNumberY = y;
	spriteNumberX = x;

	printf("%s\n", SpriteSheet[spriteNumberY][spriteNumberX]);
}

int main() {
	chooseSprite(1, 1);

	if (SpriteSheet[spriteNumberY][spriteNumberX] == "brick_path.png") {
		printf("The brick sprite has been loaded!");
	} else if (SpriteSheet[spriteNumberY][spriteNumberX] == "wood_path.png") {
		printf("The wood sprite has been loaded!");
	} else if (SpriteSheet[spriteNumberY][spriteNumberX] == "metal_path.png") {
		printf("The metal sprite has been loaded!");
	} else if (SpriteSheet[spriteNumberY][spriteNumberX] == "marble_path.png") {
		printf("The marble sprite has been loaded!");
	} else if (SpriteSheet[spriteNumberY][spriteNumberX] == "mud_path.png") {
		printf("The mud sprite has been loaded!");
	} else if (SpriteSheet[spriteNumberY][spriteNumberX] == "grass_path.png") {
		printf("The grass sprite has been loaded!");
	}

	return 0;
}