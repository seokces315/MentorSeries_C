#include <stdio.h>
#include <string.h>

void main() {
	
	// 사용할 배열 선언
	char nation[7] = "ko\0rea";
	printf("%s\n", nation);

	// 문자열 길이
	// strlen(배열명)
	// null 문자 전까지 값의 길이 반환
	printf("%d\n", strlen(nation));

}
