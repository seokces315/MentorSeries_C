#include <stdio.h>
#include <string.h> // string ���� �Լ��� ���Ե� �������

void main() {

	// ���ڿ� ��ü
	// strcpy_s(�迭��, sizeof(�迭��), "���ο� ��")
	// ���� �迭�� ���� ������ ���ο� ������ ����
	char nation[6] = "korea";
	strcpy_s(nation, sizeof(nation), "japan");
	printf("%s\n", nation);

	// ���ڿ� ��
	// strcmp(�迭1, �迭2)
	// ������ 0, �ٸ��� 1 or -1 ��ȯ
	printf("%d\n", strcmp(nation, "japan"));
	printf("%d\n", strcmp(nation, "apple"));
	printf("%d\n", strcmp(nation, "squid"));

	printf("���� �Է�: ");
	scanf_s("%s", nation, sizeof(nation));
	if (!strcmp(nation, "korea")) {
		printf("�� ���� ���� ���Դϴ�.\n");
	}

}
