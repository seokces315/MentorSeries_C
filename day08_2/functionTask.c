#include <stdio.h>

// main 함수 아래에 정의할 함수 미리 선언
void printFrom1To10();
int getTotalFrom1(int); // 변수는 생략가능

// 1 ~ 10까지의 합을 구해주는 함수
int getTotalFrom1To10() {
	// 사용할 변수 선언
	int total = 0;

	// 반복문을 활용해서 연산
	for (int i = 0; i < 10; i++) {
		total += i + 1;
	}

	// 리턴값 정의
	return total;
}

// 홀수를 짝수로, 짝수를 홀수로 바꿔주는 함수
int change (int num) {
	return ++num;
}

// 5개의 정수를 입력받고 최소값과 최대값을 구해주는 함수
int* getMaxAndMin(int arData[], int length) {
	// 사용할 변수 선언
	int maxAndmin[2] = { 0, };
	int max = arData[0];
	int min = arData[0];

	// 반복문을 활용해 최대/최소 갱신
	for (int i = 1; i < length; i++) {
		if (max < arData[i]) {
			max = arData[i];
		}
		else if (min > arData[i]) {
			min = arData[i];
		}
	}

	// 리턴할 배열에 데이터 넣기
	maxAndmin[0] = max;
	maxAndmin[1] = min;
	return maxAndmin; // 배열 == 시작 주소를 담은 포인터
}

void main() {
	
	// 함수 호출
	printFrom1To10();
	printf("%d\n", getTotalFrom1(10));

}

// 1 ~ 10까지 printf()로 출력하는 함수
void printFrom1To10() {
	// 반복문을 활용해서 출력
	for (int i = 0; i < 10; i++) {
		printf("%d ", i + 1);
	}
	printf("\n"); // 줄바꿈
}

// 1 ~ n까지의 합을 구해주는 함수
int getTotalFrom1(int n) {
	// 사용할 변수 선언
	int total = 0;

	// 반복문을 활용해서 연산
	for (int i = 0; i < n; i++) {
		total += i + 1;
	}

	// 리턴값 정의
	return total;
}
