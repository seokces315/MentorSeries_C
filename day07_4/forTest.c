#include <stdio.h>

void main() {

	// �ݺ����� �� ���� ����ؼ� ������ 1 ~ 9�� ���
	for (int i = 0; i < 81; i++) {
		if (i % 9 == 0) {
			printf("(%d��)\n", i / 9 + 1);
		}

		printf("%d * %d = %d\n", i / 9 + 1, i % 9 + 1, (i / 9 + 1) * (i % 9 + 1));
	}

	printf("-----------\n"); // ��� ����

	// ���� �ݺ����� ����ؼ� ������ 1 ~ 9�� ���
	for (int i = 1; i <= 9; i++) {
		printf("(%d��)\n", i);

		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}

}
