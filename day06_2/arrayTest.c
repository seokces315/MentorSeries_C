#include <stdio.h>

void main() {

	// 사용할 배열 선언
	int arData[] = {3, 5, 1, 9, 7};

	// 배열의 크기
	printf("배열의 크기 -> %u\n", sizeof(arData));

	// 배열의 길이
	int length = sizeof(arData) / sizeof(int);
	printf("배열의 길이 -> %d\n", length);

	// 배열의 값 반환받기
	for (int i = 0; i < length; i++) {
		printf("%d ", arData[i]);
	}
	printf("\n"); // 줄바꿈

	// 원하는 결과 출력
	printf("%p\n", arData);        // 배열의 주소값
	printf("%p\n", &arData[0]);    // 첫 번째 인덱스의 주소값
	printf("%p\n", &arData[1]);    // 두 번째 인덱스의 주소값
	printf("%d\n", *(arData + 2)); // 배열의 두 번째 인덱스
	printf("%d\n", *(arData + 3)); // 배열의 세 번째 인덱스

}
