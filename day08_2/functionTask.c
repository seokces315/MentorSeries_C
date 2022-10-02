#include <stdio.h>

// main �Լ� �Ʒ��� ������ �Լ� �̸� ����
void printFrom1To10();
int getTotalFrom1(int); // ������ ��������

// 1 ~ 10������ ���� �����ִ� �Լ�
int getTotalFrom1To10() {
	// ����� ���� ����
	int total = 0;

	// �ݺ����� Ȱ���ؼ� ����
	for (int i = 0; i < 10; i++) {
		total += i + 1;
	}

	// ���ϰ� ����
	return total;
}

// Ȧ���� ¦����, ¦���� Ȧ���� �ٲ��ִ� �Լ�
int change (int num) {
	return ++num;
}

// 5���� ������ �Է¹ް� �ּҰ��� �ִ밪�� �����ִ� �Լ�
int* getMaxAndMin(int arData[], int length) {
	// ����� ���� ����
	int maxAndmin[2] = { 0, };
	int max = arData[0];
	int min = arData[0];

	// �ݺ����� Ȱ���� �ִ�/�ּ� ����
	for (int i = 1; i < length; i++) {
		if (max < arData[i]) {
			max = arData[i];
		}
		else if (min > arData[i]) {
			min = arData[i];
		}
	}

	// ������ �迭�� ������ �ֱ�
	maxAndmin[0] = max;
	maxAndmin[1] = min;
	return maxAndmin; // �迭 == ���� �ּҸ� ���� ������
}

void main() {
	
	// �Լ� ȣ��
	printFrom1To10();
	printf("%d\n", getTotalFrom1(10));

}

// 1 ~ 10���� printf()�� ����ϴ� �Լ�
void printFrom1To10() {
	// �ݺ����� Ȱ���ؼ� ���
	for (int i = 0; i < 10; i++) {
		printf("%d ", i + 1);
	}
	printf("\n"); // �ٹٲ�
}

// 1 ~ n������ ���� �����ִ� �Լ�
int getTotalFrom1(int n) {
	// ����� ���� ����
	int total = 0;

	// �ݺ����� Ȱ���ؼ� ����
	for (int i = 0; i < n; i++) {
		total += i + 1;
	}

	// ���ϰ� ����
	return total;
}
