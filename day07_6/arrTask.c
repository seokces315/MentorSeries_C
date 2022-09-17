#include <stdio.h>

void main() {

	// 사용할 배열 선언 및 초기화
	int arrIncome[2][3] = { 0, };
	int total = 0;
	double avg = 0.0;

	// 이중 반복문을 활용해 데이터 입력받기
	int length1 = sizeof(arrIncome) / sizeof(int);
	int length2 = sizeof(*arrIncome) / sizeof(int);
	for (int i = 0; i < length1/length2; i++) {
		for (int j = 0; j < length2; j++) {
			// 배열에 데이터 입력
			printf("30%d동 130%d호 월세 입력[단위:만원] -> ", i+1, j+1);
			scanf_s("%d", &arrIncome[i][j], sizeof(arrIncome)); // arrIncome[i] + j 표현

			// 입력된 데이터 총합에 연산
			total += arrIncome[i][j];
		}
	}

	// 총합을 바탕으로 평균값 구하기
	avg = (double)total / length1;

	// 원하는 결과 출력
	printf("총 월세: %d만원\n", total);
	printf("평균 월세: %.1f만원\n", avg);

}
