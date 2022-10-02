#include <stdio.h>

// f(x) = 2x + 1
// 단, x는 정수이다.

int f(int x) {
	int result = 2 * x + 1;
	return result;
}

// 실행 프로그램을 만들어주는 함수
void main() {

	// 함수를 호출해서 변수에 저장
	int result = f(3);
	// 원하는 결과를 출력
	printf("%d\n", result);

}
