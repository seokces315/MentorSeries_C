#include <stdio.h>

void main() {

	// 2���� �迭 ����
	int arrData[2][3] = { {2, 3, 4}, {5, 6, 7} };
	
	// �迭�� ��� ������ ���
	int length = sizeof(arrData) / sizeof(int);
	for (int i = 0; i < length; i++) {
		// ���� ���������� �ٹٲ�
		if ((i%3 == 0) && (i != 0)) {
			printf("\n");
		}

		printf("%d ", arrData[i/3][i%3]);
	}

}
