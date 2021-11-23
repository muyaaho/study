#include "Header.h"

#define INTERVAL 1.0/60.0

int main() {

	float prev = (float)clock() / CLOCKS_PER_SEC;
	Display* display = new Display();
	GameEngine* gameEngine = new GameEngine();
	showConsoleCursor(false);

	while (true) {
		float curr = (float)clock() / CLOCKS_PER_SEC;
		float dt = curr - prev;

		if (dt < INTERVAL) continue;
		prev = curr;

		bool left = keyState('a');
		if (left) {
			//왼쪽으로 블록 이동
		}
		else {
			//블록 떨어지게
		}

		
		bool right = keyState('d');

		gameEngine->next(dt, 0);
		gameEngine->makeDisplayData();
		// 화면 출력
		display->draw();
		// 게임 상태 판별


	}


	return 0;
}