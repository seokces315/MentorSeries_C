#include <stdio.h>

void main() {

	// 1 ~ 100���� �迭�� ���� �� Ȧ���� ���
	int arData1[100] = { 0, };
	int length1 = sizeof(arData1) / sizeof(int);
	for (int i = 0; i < length1; i++) {
		arData1[i] = i + 1;
		
		if (arData1[i] % 2 == 1) {
			printf("%d ", arData1[i]);
		}
	}
	printf("\n"); // �ٹٲ�

	// 1 ~ 100���� �迭�� ���� �� ¦���� �� ���
	int total = 0;
	int arData2[100] = { 0, };
	int length2 = sizeof(arData2) / sizeof(int);
	for (int i = 0; i < length2; i++) {
		arData2[i] = i + 1;

		if (arData2[i] % 2 == 0) {
			total += arData2[i];
		}
	}
	printf("¦���� ��: %d\n", total);

	// A ~ F �� C�� �����ϰ� �迭�� ���� �� ���
	// ���� ������ Ȱ���ϱ�
	char arData3[5] = { ' ', };
	int length3 = sizeof(arData3) / sizeof(char);
	for (int i = 0; i < length3; i++) {
		arData3[i] = i >= 2 ? 66+i : 65+i;
		printf("%c ", arData3[i]);
	}
	printf("\n"); // �ٹٲ�

	// 5���� ������ �Է¹ް� �ִ밪�� �ּҰ� ���ϱ�
	int arData4[5] = { 0, };
	int length4 = sizeof(arData4) / sizeof(int);
	for (int i = 0; i < length4; i++) {
		printf("%d��° ���� �Է�: ", i + 1);
		scanf_s("%d", arData4 + i); // &arData[i]�� �迭�� ǥ��
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
	printf("�ִ밪: %d, �ּҰ�: %d\n", max, min);

	// aBcDeFgHiJkLmNoPqRsTuVwXyZ �迭�� ���
	char arData5[26] = { ' ', };
	int length5 = sizeof(arData5) / sizeof(char);
	for (int i = 0; i < length5; i++) {
		arData5[i] = (i % 2 == 0) ? 97 + i: 65 + i;
		printf("%c", arData5[i]);
	}
	printf("\n"); // �ٹٲ�

}
