#include <stdio.h>

void main() {

	// 1 ~ 10 중 4까지만 출력
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);

		// loop를 탈출하는 조건
		if (i == 4) {
			break;
		}
	}
	puts("----------\n");

	// 1 ~ 10 중 4를 제외하고 출력
	for (int i = 1; i <= 10; i++) {
		// loop를 건너뛰는 조건
		if (i == 4) {
			continue;
		}

		printf("%d\n", i);
	}

}
