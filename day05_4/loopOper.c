#include <stdio.h>

void main() {

	// 1 ~ 10 �� 4������ ���
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);

		// loop�� Ż���ϴ� ����
		if (i == 4) {
			break;
		}
	}
	puts("----------\n");

	// 1 ~ 10 �� 4�� �����ϰ� ���
	for (int i = 1; i <= 10; i++) {
		// loop�� �ǳʶٴ� ����
		if (i == 4) {
			continue;
		}

		printf("%d\n", i);
	}

}
