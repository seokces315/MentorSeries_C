#include <stdio.h>

void main() {

	// ����� �迭 �� ���� ����
	char pw[6] = "a1b2c3";
	char en_pw[6] = "";
	char de_pw[6] = "";
	const int KEY = 3; // key���� ����� �ʱ�ȭ

	// ���ڿ� ������ ������ ����� ������
	// �ݺ����� �̿��� key������ ��ȣȭ�� ����
	// ��ȣȭ�� ����� �迭�� ����
	for (int i = 0; i < sizeof(pw); i++) {
		en_pw[i] = (char)(pw[i] + KEY);
	}

	// �⺻ passwd�� ���
	printf("���� passwd: ");
	for (int i = 0; i < sizeof(pw); i++) {
		printf("%c", pw[i]);
	}
	printf("\n");

	// ��ȣȭ�� passwd�� ���
	printf("��ȣȭ�� passwd: ");
	for (int i = 0; i < sizeof(en_pw); i++) {
		printf("%c", en_pw[i]);
	}
	printf("\n");

	// ��ȣȭȭ��
	for (int i = 0; i < sizeof(en_pw); i++) {
		de_pw[i] = (char)(en_pw[i] - KEY);
	}

	// ��ȣȭ�� passwd�� ���
	printf("��ȣȭ�� passwd: ");
	for (int i = 0; i < sizeof(de_pw); i++) {
		printf("%c", de_pw[i]);
	}
	printf("\n");

}
