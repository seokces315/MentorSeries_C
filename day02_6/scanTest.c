#include <stdio.h>

void main() {
	
	// 사용할 변수 선언
	int num1 = 0, num2 = 0, result;

	// 정수 2개 입력받기
	printf("첫 번째 정수: ");
	scanf_s("%d", &num1);
	printf("두 번째 정수: ");
	scanf_s("%d", &num2);

	// 두 정수를 더해서 출력
	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);

}
