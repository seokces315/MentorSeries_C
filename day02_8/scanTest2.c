#include <stdio.h>

void main() {

	// ����� ���� ����
	int age = 0;
	double height = 0.0, weight = 0.0;

	// ����, Ű, ������ �Է¹ޱ�
	printf("����: ");
	scanf_s("%d", &age);
	printf("Ű: ");
	scanf_s("%lf", &height);
	printf("������: ");
	scanf_s("%lf", &weight);

	// ��� ����ϱ�
	printf("����: %d��\nŰ: %.1lfcm, ������: %.2lfkg\n", age, height, weight);

}
