#include <stdio.h>

void main() {

	// 2차원 배열 선언
	int arrData[2][3] = { {2, 3, 4}, {5, 6, 7} };
	
	// 배열에 담긴 데이터 출력
	int length = sizeof(arrData) / sizeof(int);
	for (int i = 0; i < length; i++) {
		// 행이 끝날때마다 줄바꿈
		if ((i%3 == 0) && (i != 0)) {
			printf("\n");
		}

		printf("%d ", arrData[i/3][i%3]);
	}

}
