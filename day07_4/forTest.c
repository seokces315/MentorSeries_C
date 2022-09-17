#include <stdio.h>

void main() {

	// 반복문을 한 번만 사용해서 구구단 1 ~ 9단 출력
	for (int i = 0; i < 81; i++) {
		if (i % 9 == 0) {
			printf("(%d단)\n", i / 9 + 1);
		}

		printf("%d * %d = %d\n", i / 9 + 1, i % 9 + 1, (i / 9 + 1) * (i % 9 + 1));
	}

	printf("-----------\n"); // 출력 구분

	// 이중 반복문을 사용해서 구구단 1 ~ 9단 출력
	for (int i = 1; i <= 9; i++) {
		printf("(%d단)\n", i);

		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}

}
