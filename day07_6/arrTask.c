#include <stdio.h>

void main() {

	// ����� �迭 ���� �� �ʱ�ȭ
	int arrIncome[2][3] = { 0, };
	int total = 0;
	double avg = 0.0;

	// ���� �ݺ����� Ȱ���� ������ �Է¹ޱ�
	int length1 = sizeof(arrIncome) / sizeof(int);
	int length2 = sizeof(*arrIncome) / sizeof(int);
	for (int i = 0; i < length1/length2; i++) {
		for (int j = 0; j < length2; j++) {
			// �迭�� ������ �Է�
			printf("30%d�� 130%dȣ ���� �Է�[����:����] -> ", i+1, j+1);
			scanf_s("%d", &arrIncome[i][j], sizeof(arrIncome)); // arrIncome[i] + j ǥ��

			// �Էµ� ������ ���տ� ����
			total += arrIncome[i][j];
		}
	}

	// ������ �������� ��հ� ���ϱ�
	avg = (double)total / length1;

	// ���ϴ� ��� ���
	printf("�� ����: %d����\n", total);
	printf("��� ����: %.1f����\n", avg);

}
