#include <stdio.h>
#include <string.h>

void main() {
	
	// ����� �迭 ����
	char nation[7] = "ko\0rea";
	printf("%s\n", nation);

	// ���ڿ� ����
	// strlen(�迭��)
	// null ���� ������ ���� ���� ��ȯ
	printf("%d\n", strlen(nation));

}
