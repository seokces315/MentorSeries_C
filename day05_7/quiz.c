#include <stdio.h>

void main() {

	// ����� ���� ����
	int choice;
	int answer = 4;
	char* resMsg = "";

	// while-loop�� �ۼ�
	while (1) {
		// Quiz�� �� �Է¹ޱ�
		printf("Q. ���� �� ������ �ƴ� ����?\n");
		printf("1. ������\n2. �����\n3. �ڻԼ�\n4. �\n");
		scanf_s("%d", &choice);

		// ���� ���ؼ� ���Ǻб��� ���
		if (choice == answer) {
			resMsg = "����!";
		}
		else if ((1 <= choice) && (choice <= 3)) {
			resMsg = "�����Դϴ�~";
		}
		else {
			resMsg = "�ٽ� �õ����ּ���.";
		}
		puts(resMsg);

		// ������ Ż���ϴ� ����
		if (choice == answer) { break; }

	}

}
