// 헤더파일 선언
#include <stdio.h>

// 메인함수 작성
void main() {

  // ctrl + k 이후 ctrl + c -> 한줄 주석
  // ctrl + k 이후 ctrl + u -> 주석 해제
  // 변수 선언
  int i = 10;
  long l = 10L;
  float f = 3.14F;
  double d = 3.14;
  char c = 'a';
  char* str = "ABC";

  // sizeof()
  // 변수 및 자료형을 파라미터로 해서 그 크기를 알려주는 메서드
  printf("%d\n", sizeof(int));
  printf("%d\n", sizeof(long));
  printf("%d\n", sizeof(float));
  printf("%d\n", sizeof(double));
  printf("%d\n", sizeof(char));
  printf("%d\n", sizeof(str));

}
