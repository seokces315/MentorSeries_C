#include <stdio.h>

void main() {

	// ����� ���� ����
	int choice;
	char* aMsg = "�Ĳ��ϰ� �����ϴ�";
	char* bMsg = "�������� ����";
	char* oMsg = "�米���� ����";
	char* abMsg = "���ϴ�";
	char* offMsg = "�����մϴ�~";
	char* errMsg = "�߸��� �Է��Դϴ�!";
	char* resMsg = "";

	// do-while-loop�� �ۼ�
	do {
		// ������ �Է¹ޱ�
		printf("����� ��������?\n");
		printf("1. A\n2. B\n3. O\n4. AB\n5. ������\n");
		scanf_s("%d", &choice);

		// switch���� Ȱ���� ���Ǻб�
		switch (choice) {
		case 1 :
			resMsg = aMsg;
			break;
		case 2 :
			resMsg = bMsg;
			break;
		case 3 :
			resMsg = oMsg;
			break;
		case 4 :
			resMsg = abMsg;
			break;
		case 5 :
			resMsg = offMsg;
			break;
		default :
			resMsg = errMsg;
		}

		// ���Ǻб� �� ���
		printf("%s\n--------------------\n", resMsg);
	} while (choice != 5);

}
