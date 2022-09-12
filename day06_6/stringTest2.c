#include <stdio.h>

void main() {

	// 사용할 문자열 선언
	// "" -> 빈 문자열
	char fruit[6] = "";

	// 문자열 입력받기
	// scanf -> 메모리 범위를 벗어나는 위험성
	// scanf_s : 배열의 크기를 인자로 전달해서 이를 해결
	// scanf_s("서식문자", &저장공간, sizeof(저장공간))
	printf("과일 이름: ");
	scanf_s("%s", fruit, sizeof(fruit));

	// 원하는 결과 출력
	printf("%s은 맛있어!", fruit);

}
