#include <stdio.h>

void main() {

	// ����� ���ڿ� ����
	// "" -> �� ���ڿ�
	char fruit[6] = "";

	// ���ڿ� �Է¹ޱ�
	// scanf -> �޸� ������ ����� ���輺
	// scanf_s : �迭�� ũ�⸦ ���ڷ� �����ؼ� �̸� �ذ�
	// scanf_s("���Ĺ���", &�������, sizeof(�������))
	printf("���� �̸�: ");
	scanf_s("%s", fruit, sizeof(fruit));

	// ���ϴ� ��� ���
	printf("%s�� ���־�!", fruit);

}
