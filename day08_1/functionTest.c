#include <stdio.h>

// f(x) = 2x + 1
// ��, x�� �����̴�.

int f(int x) {
	int result = 2 * x + 1;
	return result;
}

// ���� ���α׷��� ������ִ� �Լ�
void main() {

	// �Լ��� ȣ���ؼ� ������ ����
	int result = f(3);
	// ���ϴ� ����� ���
	printf("%d\n", result);

}
