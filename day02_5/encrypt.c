#include <stdio.h>

void main() {

	// 사용할 배열 및 변수 선언
	char pw[6] = "a1b2c3";
	char en_pw[6] = "";
	char de_pw[6] = "";
	const int KEY = 3; // key값은 상수로 초기화

	// 문자와 정수의 연산의 결과는 정수임
	// 반복문을 이용해 key값으로 암호화를 진행
	// 암호화된 결과를 배열에 저장
	for (int i = 0; i < sizeof(pw); i++) {
		en_pw[i] = (char)(pw[i] + KEY);
	}

	// 기본 passwd를 출력
	printf("원시 passwd: ");
	for (int i = 0; i < sizeof(pw); i++) {
		printf("%c", pw[i]);
	}
	printf("\n");

	// 암호화된 passwd를 출력
	printf("암호화된 passwd: ");
	for (int i = 0; i < sizeof(en_pw); i++) {
		printf("%c", en_pw[i]);
	}
	printf("\n");

	// 복호화화기
	for (int i = 0; i < sizeof(en_pw); i++) {
		de_pw[i] = (char)(en_pw[i] - KEY);
	}

	// 복호화된 passwd를 출력
	printf("복호화된 passwd: ");
	for (int i = 0; i < sizeof(de_pw); i++) {
		printf("%c", de_pw[i]);
	}
	printf("\n");

}
