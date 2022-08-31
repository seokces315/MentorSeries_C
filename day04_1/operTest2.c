#include <stdio.h>

void main() {

	// 사용할 변수 선언
	int choice;
	char* aMsg = "꼼꼼하고 세심하다";
	char* bMsg = "추진력이 좋다";
	char* oMsg = "사교성이 좋다";
	char* abMsg = "착하다";
	char* errMsg = "잘못된 입력입니다!";

	// 혈액형 입력받기
	printf("당신의 혈액형은?\n");
	printf("1. A\n2. B\n3. O\n4. AB\n");
	scanf_s("%d", &choice);

	// 삼항연산자를 활용해 조건분기 후 출력
	int con1 = (choice == 1);
	int con2 = (choice == 2);
	int con3 = (choice == 3);
	int con4 = (choice == 4);

	printf("%s\n", con1 ? aMsg : 
		con2 ? bMsg : 
		con3 ? oMsg : 
		con4 ? abMsg : errMsg);

}
