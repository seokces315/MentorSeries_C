#include <stdio.h>
#include <string.h> // string 관련 함수가 포함된 헤더파일

void main() {

	// 문자열 교체
	// strcpy_s(배열명, sizeof(배열명), "새로운 값")
	// 기존 배열의 값을 전달한 새로운 값으로 변경
	char nation[6] = "korea";
	strcpy_s(nation, sizeof(nation), "japan");
	printf("%s\n", nation);

	// 문자열 비교
	// strcmp(배열1, 배열2)
	// 같으면 0, 다르면 1 or -1 반환
	printf("%d\n", strcmp(nation, "japan"));
	printf("%d\n", strcmp(nation, "apple"));
	printf("%d\n", strcmp(nation, "squid"));

	printf("나라 입력: ");
	scanf_s("%s", nation, sizeof(nation));
	if (!strcmp(nation, "korea")) {
		printf("두 값은 같은 값입니다.\n");
	}

}
