#include "../vendor/raylib/raylib.h"

#define WIDTH 800
#define HEIGHT 600


int main() {
	InitWindow(WIDTH, HEIGHT, "Portfolio");
	SetTargetFPS(60);

	while(!WindowShouldClose()) {
		BeginDrawing();
		
		ClearBackground(DARKGRAY);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}
