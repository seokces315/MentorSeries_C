#include <stdio.h>

void main() {

	// ����� �迭 ����
	int arData[] = {3, 5, 1, 9, 7};

	// �迭�� ũ��
	printf("�迭�� ũ�� -> %u\n", sizeof(arData));

	// �迭�� ����
	int length = sizeof(arData) / sizeof(int);
	printf("�迭�� ���� -> %d\n", length);

	// �迭�� �� ��ȯ�ޱ�
	for (int i = 0; i < length; i++) {
		printf("%d ", arData[i]);
	}
	printf("\n"); // �ٹٲ�

	// ���ϴ� ��� ���
	printf("%p\n", arData);        // �迭�� �ּҰ�
	printf("%p\n", &arData[0]);    // ù ��° �ε����� �ּҰ�
	printf("%p\n", &arData[1]);    // �� ��° �ε����� �ּҰ�
	printf("%d\n", *(arData + 2)); // �迭�� �� ��° �ε���
	printf("%d\n", *(arData + 3)); // �迭�� �� ��° �ε���

}
