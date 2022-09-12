#include <stdio.h>

void main() {

	// 1 ~ 100까지 배열에 담은 후 홀수만 출력
	int arData1[100] = { 0, };
	int length1 = sizeof(arData1) / sizeof(int);
	for (int i = 0; i < length1; i++) {
		arData1[i] = i + 1;
		
		if (arData1[i] % 2 == 1) {
			printf("%d ", arData1[i]);
		}
	}
	printf("\n"); // 줄바꿈

	// 1 ~ 100까지 배열에 담은 후 짝수의 합 출력
	int total = 0;
	int arData2[100] = { 0, };
	int length2 = sizeof(arData2) / sizeof(int);
	for (int i = 0; i < length2; i++) {
		arData2[i] = i + 1;

		if (arData2[i] % 2 == 0) {
			total += arData2[i];
		}
	}
	printf("짝수의 합: %d\n", total);

	// A ~ F 중 C를 제외하고 배열에 담은 후 출력
	// 삼항 연산자 활용하기
	char arData3[5] = { ' ', };
	int length3 = sizeof(arData3) / sizeof(char);
	for (int i = 0; i < length3; i++) {
		arData3[i] = i >= 2 ? 66+i : 65+i;
		printf("%c ", arData3[i]);
	}
	printf("\n"); // 줄바꿈

	// 5개의 정수를 입력받고 최대값과 최소값 구하기
	int arData4[5] = { 0, };
	int length4 = sizeof(arData4) / sizeof(int);
	for (int i = 0; i < length4; i++) {
		printf("%d번째 정수 입력: ", i + 1);
		scanf_s("%d", arData4 + i); // &arData[i]의 배열식 표현
	}
	int max = arData4[0];
	int min = arData4[0];
	for (int i = 1; i < length4; i++) {
		if(max < arData4[i]) {
			max = arData4[i];
		}
		else if (min > arData4[i]) {
			min = arData4[i];
		}
	}
	printf("최대값: %d, 최소값: %d\n", max, min);

	// aBcDeFgHiJkLmNoPqRsTuVwXyZ 배열에 담기
	char arData5[26] = { ' ', };
	int length5 = sizeof(arData5) / sizeof(char);
	for (int i = 0; i < length5; i++) {
		arData5[i] = (i % 2 == 0) ? 97 + i: 65 + i;
		printf("%c", arData5[i]);
	}
	printf("\n"); // 줄바꿈

}
