#include <stdio.h>

void main() {

	// ����� ���� ����
	int num1 = 0, num2 = 0, share, remain;

	// �� ������ �Է¹ޱ�
	printf("ù ��° ����: ");
	scanf_s("%d", &num1);
	printf("�� ��° ����: ");
	scanf_s("%d", &num2);

	// �� ������ ������ ��� ������ ���
	share = num1 / num2;
	remain = num1 % num2;

	printf("�� -> %d, ������ -> %d\n", share, remain);

}
