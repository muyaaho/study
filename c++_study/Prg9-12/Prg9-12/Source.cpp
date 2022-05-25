/* 함수의 매개변수로 2차원 배열을 포인터로 전달해서 출력하는 프로그램*/
#include <iostream>
using namespace std;

void print(int(*)[4], int);

int main() {
	int matrix[3][4] = { {10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33} };
	print(matrix, 3);
	return 0;
}

/* 4개의 요소를 갖는 배열에 대한 포인터와 행의 수를 매개변수로 받는 함수*/
void print(int(*m)[4], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < 4; j++) {
			cout << m[i][j] << "  ";
		}
		cout << endl;
	}
}