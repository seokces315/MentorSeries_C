#include <stdio.h>

void main() {

	// ����� ���� ����
	int num1, num2;

	// ���� 2���� �Է¹ޱ�
	printf("ù ��° ����: ");
	scanf_s("%d", &num1);
	printf("�� ��° ����: ");
	scanf_s("%d", &num2);

	// if�� ����� ���ǹ����� �б�
	if (num1 > num2) {
		printf("ū �� -> %d\n", num1);
	}
	else if (num2 > num1) {
		printf("ū �� -> %d\n", num2);
	}
	else {
		printf("�� ���� �����ϴ�.");
	}

}
