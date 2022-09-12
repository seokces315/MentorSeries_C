#include <stdio.h>

void main() {

	// 사용할 문자 배열 선언
	// 올바른 출력을 위해 null문자('\0') 추가
	char fruit1[6] = { 'a', 'p', 'p', 'l', 'e' };
	// 문자열로 선언
	char fruit2[6] = "apple";

	printf("%s\n", fruit1);
	printf("%s\n", fruit2);

}
