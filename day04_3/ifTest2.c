#include <stdio.h>

void main() {
	
	// ����� ���� ����
	int choice;
	char* aMsg = "�Ĳ��ϰ� �����ϴ�";
	char* bMsg = "�������� ����";
	char* oMsg = "�米���� ����";
	char* abMsg = "���ϴ�";
	char* errMsg = "�߸��� �Է��Դϴ�!";
	char* resMsg = "";

	// ������ �Է¹ޱ�
	printf("����� ��������?\n");
	printf("1. A\n2. B\n3. O\n4. AB\n");
	scanf_s("%d", &choice);

	// ���ǹ��� Ȱ���� ���Ǻб� �� ���
	if (choice == 1) {
		resMsg = aMsg;
	}
	else if (choice == 2) {
		resMsg = bMsg;
	}
	else if (choice == 3) {
		resMsg = oMsg;
	}
	else if (choice == 4) {
		resMsg = abMsg;
	}
	else {
		resMsg = errMsg;
	}

	printf("%s\n", resMsg);

}
