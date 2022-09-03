#include <stdio.h>

void main() {

	// 사용할 변수 선언
	int choice;
	char* aMsg = "꼼꼼하고 세심하다";
	char* bMsg = "추진력이 좋다";
	char* oMsg = "사교성이 좋다";
	char* abMsg = "착하다";
	char* offMsg = "종료합니다~";
	char* errMsg = "잘못된 입력입니다!";
	char* resMsg = "";

	// do-while-loop문 작성
	do {
		// 혈액형 입력받기
		printf("당신의 혈액형은?\n");
		printf("1. A\n2. B\n3. O\n4. AB\n5. 나가기\n");
		scanf_s("%d", &choice);

		// switch문을 활용해 조건분기
		switch (choice) {
		case 1 :
			resMsg = aMsg;
			break;
		case 2 :
			resMsg = bMsg;
			break;
		case 3 :
			resMsg = oMsg;
			break;
		case 4 :
			resMsg = abMsg;
			break;
		case 5 :
			resMsg = offMsg;
			break;
		default :
			resMsg = errMsg;
		}

		// 조건분기 후 출력
		printf("%s\n--------------------\n", resMsg);
	} while (choice != 5);

}
