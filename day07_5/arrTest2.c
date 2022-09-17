#include <stdio.h>

void main() {

	// 2차원 배열 선언
	int arrData[2][3] = { 0, };

	// 이중 반복문을 활용해 배열에 데이터 담기
	int length1 = sizeof(arrData) / sizeof(int);
	int length2 = sizeof(*arrData) / sizeof(int);
	for (int i = 0; i < length1/length2; i++) {
		for (int j = 0; j < length2; j++) {
			arrData[i][j] = 5;
		}
	}

	// 이중 반복문을 활용해 배열에 담긴 데이터 출력
	for (int i = 0; i < length1 / length2; i++) {
		for (int j = 0; j < length2; j++) {
			printf("%d ", arrData[i][j]);
		}
		printf("\n"); // 줄바꿈
	}

}
