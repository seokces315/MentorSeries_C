#include <stdio.h>

void main() {
	
	// ����� ���� ����
	int num1 = 0, num2 = 0, result;

	// ���� 2�� �Է¹ޱ�
	printf("ù ��° ����: ");
	scanf_s("%d", &num1);
	printf("�� ��° ����: ");
	scanf_s("%d", &num2);

	// �� ������ ���ؼ� ���
	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);

}
