#include <stdio.h>

void main() {

	// ����� ���� ����
	int choice;
	char* aMsg = "�Ĳ��ϰ� �����ϴ�";
	char* bMsg = "�������� ����";
	char* oMsg = "�米���� ����";
	char* abMsg = "���ϴ�";
	char* errMsg = "�߸��� �Է��Դϴ�!";

	// ������ �Է¹ޱ�
	printf("����� ��������?\n");
	printf("1. A\n2. B\n3. O\n4. AB\n");
	scanf_s("%d", &choice);

	// ���׿����ڸ� Ȱ���� ���Ǻб� �� ���
	int con1 = (choice == 1);
	int con2 = (choice == 2);
	int con3 = (choice == 3);
	int con4 = (choice == 4);

	printf("%s\n", con1 ? aMsg : 
		con2 ? bMsg : 
		con3 ? oMsg : 
		con4 ? abMsg : errMsg);

}
