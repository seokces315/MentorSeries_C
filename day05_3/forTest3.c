#include <stdio.h>

void main() {

	// 0, 1, 2 �׷��� �ݺ��ؼ� 3�� ���
	for (int i = 0; i < 9; i++) {
		printf("%d ", i % 3);
	}
	printf("\n");

	// aBcDeFgHiJkLmNoPqRsTuVwXyZ ���
	for (int i = 0; i < 26; i++) {
		printf("%c", (i % 2 == 1) ? i+65 : i+97);
	}
	printf("\n");

}
