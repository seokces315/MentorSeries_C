#include <stdio.h>

void main() {

	// 사용할 변수 선언
	int data = 10;
	int* pData = &data;

	// 원하는 결과 출력
	printf("%p\n", &data);
	printf("%p\n", pData);
	printf("%d\n", *pData);
	printf("%p\n", pData + 1);

}
