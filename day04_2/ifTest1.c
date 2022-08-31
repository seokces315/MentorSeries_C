#include <stdio.h>

void main() {

	// 사용할 변수 선언
	int num1, num2;

	// 정수 2개를 입력받기
	printf("첫 번째 정수: ");
	scanf_s("%d", &num1);
	printf("두 번째 정수: ");
	scanf_s("%d", &num2);

	// if를 사용한 조건문으로 분기
	if (num1 > num2) {
		printf("큰 값 -> %d\n", num1);
	}
	else if (num2 > num1) {
		printf("큰 값 -> %d\n", num2);
	}
	else {
		printf("두 수가 같습니다.");
	}

}
