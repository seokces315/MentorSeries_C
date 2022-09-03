#include <stdio.h>

void main() {

	// 정수를 1 ~ 100 범위에서 출력
	for (int i = 0; i < 100; i++) {
		printf("%d\n", i + 1);
	}
	printf("--------------------\n");

	// 1 ~ 100을 내림차순으로 출력
	for (int i = 100; i > 0; i--) {
		printf("%d\n", i);
	}
	printf("--------------------\n");

	// 1 ~ 100 중 짝수만 출력
	for (int i = 0; i < 50; i++) {
		printf("%d\n", 2 * (i + 1));
	}
	printf("--------------------\n");

	// 1 ~ 10 범위의 총합 출력
	int total = 0;
	for (int i = 0; i < 10; i++) {
		total += i + 1;
	}
	printf("1 ~ 10까지의 합 -> %d\n", total);
	puts("--------------------");

	// 1 ~ N 범위의 총합 출력
	int N;
	total = 0;
	printf("정수 N: ");
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		total += i + 1;
	}
	printf("1 ~ N까지의 합 -> %d\n", total);
	puts("--------------------");

	// A ~ F를 출력
	for (int i = 0; i < 6; i++) {
		printf("%c\n", i + 65);
	}
	puts("--------------------");

	// A ~ F 중 B를 제외하고 출력
	for (int i = 0; i < 6; i++) {
		// B를 제외시키는 로직
		if (i == 1) {
			continue;
		}

		printf("%c\n", i + 65);
	}
	puts("--------------------");

}
