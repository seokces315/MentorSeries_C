#include <stdio.h>

void main() {

	// 사용할 변수 선언
	int choice;
	int answer = 4;
	char* resMsg = "";

	// while-loop문 작성
	while (1) {
		// Quiz의 답 입력받기
		printf("Q. 다음 중 동물이 아닌 것은?\n");
		printf("1. 강아지\n2. 고양이\n3. 코뿔소\n4. 어묵\n");
		scanf_s("%d", &choice);

		// 답을 비교해서 조건분기후 출력
		if (choice == answer) {
			resMsg = "정답!";
		}
		else if ((1 <= choice) && (choice <= 3)) {
			resMsg = "오답입니다~";
		}
		else {
			resMsg = "다시 시도해주세요.";
		}
		puts(resMsg);

		// 루프를 탈출하는 조건
		if (choice == answer) { break; }

	}

}
