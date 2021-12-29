#include "Header.h"
#include "GameEngine.h"
#include "Display.h"


#define INTERVAL 1.0/60.0

int displayData[GRID_HEIGHT][GRID_WIDTH] = { 0, };

int main() {
	
	srand(time(0));

	float prev = (float)clock() / CLOCKS_PER_SEC;
	Display* display = new Display();
	GameEngine* gameEngine = new GameEngine();
	gameEngine->init();

	showConsoleCursor(false);

	while (true) {
		float curr = (float)clock() / CLOCKS_PER_SEC;
		float dt = curr - prev;

		if (dt < INTERVAL) continue;
		prev = curr;

		bool left = keyState('a');
		bool right = keyState('d');
		bool down = keyState('s');
		bool rotate = keyState('w');
		if (left) gameEngine->next(dt, 'a'); //�������� ���� �̵�
		else if (right) gameEngine->next(dt, 'd');
		else if (down) gameEngine->next(dt, 's');
		else if (rotate) gameEngine->next(dt, 'w');
		else gameEngine->next(dt, 0); // ���� ��������


		gameEngine->makeDisplayData();
		// ȭ�� ���
		display->draw();
		// ���� ���� �Ǻ�

		if (gameEngine->state == GameEngine::GameState::GAMEOVER)
			break;
	}


	return 0;
}