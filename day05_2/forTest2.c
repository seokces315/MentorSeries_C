#include <stdio.h>

void main() {

	// ������ 1 ~ 100 �������� ���
	for (int i = 0; i < 100; i++) {
		printf("%d\n", i + 1);
	}
	printf("--------------------\n");

	// 1 ~ 100�� ������������ ���
	for (int i = 100; i > 0; i--) {
		printf("%d\n", i);
	}
	printf("--------------------\n");

	// 1 ~ 100 �� ¦���� ���
	for (int i = 0; i < 50; i++) {
		printf("%d\n", 2 * (i + 1));
	}
	printf("--------------------\n");

	// 1 ~ 10 ������ ���� ���
	int total = 0;
	for (int i = 0; i < 10; i++) {
		total += i + 1;
	}
	printf("1 ~ 10������ �� -> %d\n", total);
	puts("--------------------");

	// 1 ~ N ������ ���� ���
	int N;
	total = 0;
	printf("���� N: ");
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		total += i + 1;
	}
	printf("1 ~ N������ �� -> %d\n", total);
	puts("--------------------");

	// A ~ F�� ���
	for (int i = 0; i < 6; i++) {
		printf("%c\n", i + 65);
	}
	puts("--------------------");

	// A ~ F �� B�� �����ϰ� ���
	for (int i = 0; i < 6; i++) {
		// B�� ���ܽ�Ű�� ����
		if (i == 1) {
			continue;
		}

		printf("%c\n", i + 65);
	}
	puts("--------------------");

}
