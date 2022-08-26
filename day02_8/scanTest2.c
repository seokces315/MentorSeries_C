#include <stdio.h>

void main() {

	// 사용할 변수 선언
	int age = 0;
	double height = 0.0, weight = 0.0;

	// 나이, 키, 몸무게 입력받기
	printf("나이: ");
	scanf_s("%d", &age);
	printf("키: ");
	scanf_s("%lf", &height);
	printf("몸무게: ");
	scanf_s("%lf", &weight);

	// 결과 출력하기
	printf("나이: %d살\n키: %.1lfcm, 몸무게: %.2lfkg\n", age, height, weight);

}
