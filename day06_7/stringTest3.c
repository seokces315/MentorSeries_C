#include <stdio.h>

void main() {

	// 1. char 배열명[크기]로 문자열 선언 - 변수형 문자 배열
	// 2. char* 포인터로 문자열 선언      - 상수형 문자 배열
	// 1. const char* 포인터명 -> 그 주소에 접근 후 수정 불가
	// 2. const char* const 포인터명 -> 주소값 변경 불가
	char* fruit = "apple"; // const가 생략됨

	// 배열형과 포인터형은 성질이 반대임
	// 포인터형은 주소값을 바꿀 수 있음
	fruit = "banana";
	printf("%s\n", fruit);

	// 다만, 문자열값은 바꿀 수 없음
	*fruit = "apple";
	printf("%s\n", fruit);

}
