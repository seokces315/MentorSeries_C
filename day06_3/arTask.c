#include <stdio.h>

void main() {

	// 1 ~ 10���� �迭�� ��� ���
	int arData1[10] = {0, }; // �迭 �ʱ�ȭ
	int length1 = sizeof(arData1) / sizeof(int);
	for (int i = 0; i < length1; i++) {
		arData1[i] = i + 1;
		printf("%d ", arData1[i]);
	}
	printf("\n"); // �ٹٲ�

	// 10 ~ 1 �� ¦���� �迭�� ��� ���
	int arData2[5] = { 0, };
	int length2 = sizeof(arData2) / sizeof(int);
	for (int i = 0; i < length2; i++) {
		arData2[i] = 2 * (i + 1);
		printf("%d ", *(arData2 + i));
	}
	printf("\n"); // �ٹٲ�

}
