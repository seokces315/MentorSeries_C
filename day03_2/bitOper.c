#include <stdio.h>

void main() {

	// 비트 연산후 출력
	// 논리 연산자
	printf("%d\n", 10 & 11);
	printf("%d\n", 10 | 11);
	printf("%d\n", 10 ^ 11);

	// 단항 연산자
	printf("%d\n", ~10);
	printf("%d\n", ~11);

	// 시프트 연산자
	printf("%d\n", 10 << 1);
	printf("%d\n", 1 >> 1);
	printf("%d\n", -1 >> 1);

}
