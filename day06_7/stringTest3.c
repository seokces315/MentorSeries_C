#include <stdio.h>

void main() {

	// 1. char �迭��[ũ��]�� ���ڿ� ���� - ������ ���� �迭
	// 2. char* �����ͷ� ���ڿ� ����      - ����� ���� �迭
	// 1. const char* �����͸� -> �� �ּҿ� ���� �� ���� �Ұ�
	// 2. const char* const �����͸� -> �ּҰ� ���� �Ұ�
	char* fruit = "apple"; // const�� ������

	// �迭���� ���������� ������ �ݴ���
	// ���������� �ּҰ��� �ٲ� �� ����
	fruit = "banana";
	printf("%s\n", fruit);

	// �ٸ�, ���ڿ����� �ٲ� �� ����
	*fruit = "apple";
	printf("%s\n", fruit);

}
