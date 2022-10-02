#include <stdio.h>

// 전역변수(global variable)
int num1 = 10;
int num2 = 20;
static int num3 = 30; // 다른 파일에서는 사용할 수 없음

void add() {
	// 지역변수(local variable)
	int result = num1 + num2;

	printf("%d\n", result);
}

void sub() {
	// 지역변수(local variable)
	int result = num1 - num2;

	printf("%d\n", result);
}
