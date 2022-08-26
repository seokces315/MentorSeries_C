#include <stdio.h>

void main() {

	// 사용할 변수 선언
	int num1 = 0, num2 = 0, share, remain;

	// 두 정수를 입력받기
	printf("첫 번째 정수: ");
	scanf_s("%d", &num1);
	printf("두 번째 정수: ");
	scanf_s("%d", &num2);

	// 두 정수를 연산해 몫과 나머지 출력
	share = num1 / num2;
	remain = num1 % num2;

	printf("몫 -> %d, 나머지 -> %d\n", share, remain);

}
