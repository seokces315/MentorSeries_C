#include <stdio.h>

void main() {

	// 사용할 변수 선언
	int choice;

	// do-while-loop 작성
	do {
		// 번호 입력받기
		printf("문의하실 번호를 선택하세요.\n");
		printf("1. 분실신고\n2. 번호이동\n3. 신규가입\n4. 상담원연결\n");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1 : case 2 : case 3 : 
			printf("안녕하세요 고객님~\n");
			printf("-------------------------\n");
			break;
		case 4 :
			printf("상담원과 연결중입니다.\n");
			printf("-------------------------\n");
			break;
		default :
			printf("잘못된 입력입니다!\n");
			printf("-------------------------\n");
		}
	} while (choice != 4);

}
