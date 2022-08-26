#include <stdio.h>

void main() {

	// 변수 선언
	int age = 24;
	float height = 173.7F;
	double weight = 58.85;
	char grade = 'A';
	char* name = "조석현";

	// 변수를 이용해 출력
	printf("나이: %d살\n", age);
	printf("키: %.1fcm\n", height);
	printf("몸무게: %.2lfkg\n", weight); // 반올림은 6부터 적용됨
	printf("수행평가: \'%c\'등급\n", grade);
	printf("이름: %s\n", name);

}
