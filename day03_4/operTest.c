#include <stdio.h>

void main() {

	// ����� ���� ����
	int num1, num2;
	int con1, con2;
	char* format = "";

	// ���� 2�� �Է¹ޱ�
	printf("ù ��° ����: ");
	scanf_s("%d", &num1);
	printf("�� ��° ����: ");
	scanf_s("%d", &num2);

	// ���ǽ��� ������ ���
	con1 = num1 > num2;
	con2 = num1 == num2;
	format = con2 ? "%s\n" : "�� ū �� -> %d\n";

	// ���׿����ڷ� �� ������ �񱳤��� �� ū ���� ���
	// �� ���� ���� ���� ���� ���
	printf(format, con1 ? num1 : con2 ? "�� ���� �����ϴ�" : num2);
	
}
