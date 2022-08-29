#include <stdio.h>

void main() {

	// 사용할 변수 선언
	int num1, num2;
	int con1, con2;
	char* format = "";

	// 정수 2개 입력받기
	printf("첫 번째 정수: ");
	scanf_s("%d", &num1);
	printf("두 번째 정수: ");
	scanf_s("%d", &num2);

	// 조건식을 변수에 담기
	con1 = num1 > num2;
	con2 = num1 == num2;
	format = con2 ? "%s\n" : "더 큰 값 -> %d\n";

	// 삼항연산자로 두 정수를 비교ㅎ서 더 큰 값을 출력
	// 두 값이 같을 때는 문구 출력
	printf(format, con1 ? num1 : con2 ? "두 수가 같습니다" : num2);
	
}
