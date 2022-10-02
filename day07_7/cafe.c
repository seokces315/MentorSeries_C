#include <stdio.h>
#include <string.h>

void main() {

	// ����� ���� ���� �� �ʱ�ȭ
	char title[] = "��DS Cafe��";
	char menu[] = "���߰��ϱ�\n������ϱ�\n��˻��ϱ�\n������ϱ�\n���Ϻ���\n�쳪����";
	int choice;

	// �޴� �̸�, �޴� ������ ���� �迭 ���� �� �ʱ�ȭ
	char arName[200][100] = { "", }; // ���ڿ� �迭�� �����ؼ� �ʱ�ȭ
	char tmpName[100] = "";
	int cnt = 0;
	int isDup;
	int foundIdx;
	int arPrice[200] = { 0, };

	// while-loop�� �ۼ�
	while (1) {
		// choice �Է¹ޱ�
		printf("%s\n------------\n%s\n------------\n", title, menu);
		scanf_s("%d", &choice);

		// ���� �б�
		if (choice == 6) { break; }

		// Ż������ ���� ���ǿ� ���� switch�� ó��
		switch (choice) {
		case 1 : // �߰��ϱ�
			// �߰��� �޴��� �ӽ� ������ �Է¹ޱ�
			printf("�޴� �̸�: ");
			scanf_s("%s", tmpName, sizeof(tmpName));

			isDup = 0; // �ʱ�ȭ
			// �޴� �迭���� �ߺ� �˻�
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(tmpName, arName[i])) {
					isDup = 1;
					break;
				}
			}

			// �ߺ����� ������ ���� �Է¹޾Ƽ� ���� �޴� �߰�
			if (!isDup) {
				printf("�޴� ����: ");
				scanf_s("%d", arPrice + cnt);
				strcpy_s(arName[cnt], sizeof(arName[cnt]), tmpName); // ���ڿ� �Լ�
				cnt++;
			}
			// �ߺ��Ǹ� ��� ���
			else {
				printf("�̹� �����ϴ� ��ǰ�Դϴ�!\n");
			}
			break;
		case 2 : // �����ϱ�
			// ������ ��ǰ�� �Է¹ޱ�
			printf("������ ������ ��ǰ��: ");
			scanf_s("%s", tmpName, sizeof(tmpName));

			isDup = 0; // �ʱ�ȭ
			// �ݺ������� ���翩�� �˻�
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(tmpName, arName[i])) {
					isDup = 1;
					foundIdx = i; // �����Ͱ� ����� ���� ���
					break;
				}
			}

			// �����ϸ� ���ο� ��ǰ�� �Է¹ޱ�
			if (isDup) {
				printf("�����Ͻ� ���ο� ��ǰ��: ");
				scanf_s("%s", tmpName, sizeof(tmpName));

				// ���ο� ��ǰ�� ���� �ߺ��˻�
				isDup = 0;
				for (int i = 0; i < cnt; i++) {
					if (!strcmp(tmpName, arName[i])) {
						isDup = 1;
						break;
					}
				}

				// �ߺ����� ������ ���ο� ��ǰ���� ����
				if (!isDup) {
					printf("��ǰ ����: ");
					scanf_s("%d", arPrice + foundIdx);
					strcpy_s(arName[foundIdx], sizeof(arName[foundIdx]), tmpName);
				}
				// �ߺ��Ǹ� ��� ���
				else {
					printf("�̹� �����ϴ� ��ǰ�Դϴ�!\n");
				}
			}
			// �������� ������ ��� ���
			else {
				printf("������ ��ǰ�� �������� �ʽ��ϴ�!\n");
			}
			break;
		case 3 : // �˻��ϱ�
			// �˻��� ��ǰ�� �Է¹ޱ�
			printf("�˻��� ��ǰ�� �Է�: ");
			scanf_s("%s", tmpName, sizeof(tmpName));

			// �ݺ������� �迭���� ��ǰ ã��
			isDup = 0;
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(tmpName, arName[i])) {
					// �迭���� ��ǰ�� ã���� ���� �б�
					printf("%s - %d��\n", arName[i], arPrice[i]);
					isDup = 1;
					break;
				}
			}

			// �迭���� ��ǰ�� ���� ����� �б�
			if (!isDup) {
				printf("�˻��Ͻ� ��ǰ�� �������� �ʽ��ϴ�!\n");
			}
			break;
		case 4 : // �����ϱ�
			// ������ ��ǰ �Է¹ޱ�
			printf("������ ��ǰ�� �Է�: ");
			scanf_s("%s", tmpName, sizeof(tmpName));

			// �ݺ������� �迭���� ��ǰ ã��
			isDup = 0;
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(tmpName, arName[i])) {
					foundIdx = i;
					isDup = 1;
					break;
				}
			}

			// ���� �۾� -> ������ ������ ������ �迭�� �� ĭ ������ ����
			if (isDup) {
				for (int i = foundIdx; i < cnt; i++) {
					// ����ó��
					if (i == 199) {
						strcpy_s(arName[i], sizeof(arName[i]), "");
					}
					else {
						strcpy_s(arName[i], sizeof(arName[i]), arName[i+1]);
					}
				}
				cnt--; // �迭���� ����� ���� ���ҽ�Ű��
			}
			// ������ ��ǰ�� ������ ��� ���
			else {
				printf("������ ��ǰ�� �������� �ʽ��ϴ�!\n");
			}
			break;
		case 5 : // ��Ϻ���
			printf("(��ǰ�� �� ����)\n");
			// �ݺ������� �迭�� ��� ������ ���
			for (int i = 0; i < cnt; i++) {
				printf("%s - %d��\n", arName[i], arPrice[i]);
			}

			// ���� ó��
			if (cnt == 0) {
				printf("��ǰ ����~\n");
			}
			break;
		default :
			printf("�߸��� �Է��Դϴ�!\n");
		}
	}

}
