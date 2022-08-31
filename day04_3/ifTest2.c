#include <stdio.h>

void main() {
	
	// 사용할 변수 선언
	int choice;
	char* aMsg = "꼼꼼하고 세심하다";
	char* bMsg = "추진력이 좋다";
	char* oMsg = "사교성이 좋다";
	char* abMsg = "착하다";
	char* errMsg = "잘못된 입력입니다!";
	char* resMsg = "";

	// 혈액형 입력받기
	printf("당신의 혈액형은?\n");
	printf("1. A\n2. B\n3. O\n4. AB\n");
	scanf_s("%d", &choice);

	// 조건문을 활용해 조건분기 후 출력
	if (choice == 1) {
		resMsg = aMsg;
	}
	else if (choice == 2) {
		resMsg = bMsg;
	}
	else if (choice == 3) {
		resMsg = oMsg;
	}
	else if (choice == 4) {
		resMsg = abMsg;
	}
	else {
		resMsg = errMsg;
	}

	printf("%s\n", resMsg);

}
