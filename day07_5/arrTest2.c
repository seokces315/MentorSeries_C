#include <stdio.h>

void main() {

	// 2���� �迭 ����
	int arrData[2][3] = { 0, };

	// ���� �ݺ����� Ȱ���� �迭�� ������ ���
	int length1 = sizeof(arrData) / sizeof(int);
	int length2 = sizeof(*arrData) / sizeof(int);
	for (int i = 0; i < length1/length2; i++) {
		for (int j = 0; j < length2; j++) {
			arrData[i][j] = 5;
		}
	}

	// ���� �ݺ����� Ȱ���� �迭�� ��� ������ ���
	for (int i = 0; i < length1 / length2; i++) {
		for (int j = 0; j < length2; j++) {
			printf("%d ", arrData[i][j]);
		}
		printf("\n"); // �ٹٲ�
	}

}
