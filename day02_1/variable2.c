#include <stdio.h>

void main() {

	// ���� ����
	int age = 24;
	float height = 173.7F;
	double weight = 58.85;
	char grade = 'A';
	char* name = "������";

	// ������ �̿��� ���
	printf("����: %d��\n", age);
	printf("Ű: %.1fcm\n", height);
	printf("������: %.2lfkg\n", weight); // �ݿø��� 6���� �����
	printf("������: \'%c\'���\n", grade);
	printf("�̸�: %s\n", name);

}
