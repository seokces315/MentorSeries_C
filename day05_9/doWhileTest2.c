#include <stdio.h>

void main() {

	// ����� ���� ����
	int choice;

	// do-while-loop �ۼ�
	do {
		// ��ȣ �Է¹ޱ�
		printf("�����Ͻ� ��ȣ�� �����ϼ���.\n");
		printf("1. �нǽŰ�\n2. ��ȣ�̵�\n3. �ű԰���\n4. ��������\n");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1 : case 2 : case 3 : 
			printf("�ȳ��ϼ��� ����~\n");
			printf("-------------------------\n");
			break;
		case 4 :
			printf("������ �������Դϴ�.\n");
			printf("-------------------------\n");
			break;
		default :
			printf("�߸��� �Է��Դϴ�!\n");
			printf("-------------------------\n");
		}
	} while (choice != 4);

}
