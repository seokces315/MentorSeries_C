// ������� ����
#include <stdio.h>

// �����Լ� �ۼ�
void main() {

  // ctrl + k ���� ctrl + c -> ���� �ּ�
  // ctrl + k ���� ctrl + u -> �ּ� ����
  // ���� ����
  int i = 10;
  long l = 10L;
  float f = 3.14F;
  double d = 3.14;
  char c = 'a';
  char* str = "ABC";

  // sizeof()
  // ���� �� �ڷ����� �Ķ���ͷ� �ؼ� �� ũ�⸦ �˷��ִ� �޼���
  printf("%d\n", sizeof(int));
  printf("%d\n", sizeof(long));
  printf("%d\n", sizeof(float));
  printf("%d\n", sizeof(double));
  printf("%d\n", sizeof(char));
  printf("%d\n", sizeof(str));

}
