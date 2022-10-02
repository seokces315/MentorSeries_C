#include <stdio.h>
#include <string.h>

void main() {

	// 사용할 변수 선언 및 초기화
	char title[] = "♨DS Cafe♨";
	char menu[] = "①추가하기\n②수정하기\n③검색하기\n④삭제하기\n⑤목록보기\n⑥나가기";
	int choice;

	// 메뉴 이름, 메뉴 가격을 담을 배열 선언 및 초기화
	char arName[200][100] = { "", }; // 문자열 배열로 가정해서 초기화
	char tmpName[100] = "";
	int cnt = 0;
	int isDup;
	int foundIdx;
	int arPrice[200] = { 0, };

	// while-loop문 작성
	while (1) {
		// choice 입력받기
		printf("%s\n------------\n%s\n------------\n", title, menu);
		scanf_s("%d", &choice);

		// 조건 분기
		if (choice == 6) { break; }

		// 탈출하지 않은 조건에 대해 switch문 처리
		switch (choice) {
		case 1 : // 추가하기
			// 추가할 메뉴를 임시 변수에 입력받기
			printf("메뉴 이름: ");
			scanf_s("%s", tmpName, sizeof(tmpName));

			isDup = 0; // 초기화
			// 메뉴 배열에서 중복 검사
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(tmpName, arName[i])) {
					isDup = 1;
					break;
				}
			}

			// 중복되지 않으면 가격 입력받아서 최종 메뉴 추가
			if (!isDup) {
				printf("메뉴 가격: ");
				scanf_s("%d", arPrice + cnt);
				strcpy_s(arName[cnt], sizeof(arName[cnt]), tmpName); // 문자열 함수
				cnt++;
			}
			// 중복되면 경고 출력
			else {
				printf("이미 존재하는 상품입니다!\n");
			}
			break;
		case 2 : // 수정하기
			// 수정할 상품명 입력받기
			printf("수정할 기존의 상품명: ");
			scanf_s("%s", tmpName, sizeof(tmpName));

			isDup = 0; // 초기화
			// 반복문으로 존재여부 검사
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(tmpName, arName[i])) {
					isDup = 1;
					foundIdx = i; // 데이터가 저장된 공간 기억
					break;
				}
			}

			// 존재하면 새로운 상품명 입력받기
			if (isDup) {
				printf("수정하실 새로운 상품명: ");
				scanf_s("%s", tmpName, sizeof(tmpName));

				// 새로운 상품에 대한 중복검사
				isDup = 0;
				for (int i = 0; i < cnt; i++) {
					if (!strcmp(tmpName, arName[i])) {
						isDup = 1;
						break;
					}
				}

				// 중복되지 않으면 새로운 상품으로 수정
				if (!isDup) {
					printf("상품 가격: ");
					scanf_s("%d", arPrice + foundIdx);
					strcpy_s(arName[foundIdx], sizeof(arName[foundIdx]), tmpName);
				}
				// 중복되면 경고 출력
				else {
					printf("이미 존재하는 상품입니다!\n");
				}
			}
			// 존재하지 않으면 경고 출력
			else {
				printf("수정할 상품이 존재하지 않습니다!\n");
			}
			break;
		case 3 : // 검색하기
			// 검색할 상품명 입력받기
			printf("검색할 상품명 입력: ");
			scanf_s("%s", tmpName, sizeof(tmpName));

			// 반복문으로 배열에서 상품 찾기
			isDup = 0;
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(tmpName, arName[i])) {
					// 배열에서 상품을 찾았을 때의 분기
					printf("%s - %d원\n", arName[i], arPrice[i]);
					isDup = 1;
					break;
				}
			}

			// 배열에서 상품이 없을 경우의 분기
			if (!isDup) {
				printf("검색하신 상품이 존재하지 않습니다!\n");
			}
			break;
		case 4 : // 삭제하기
			// 삭제할 상품 입력받기
			printf("삭제할 상품명 입력: ");
			scanf_s("%s", tmpName, sizeof(tmpName));

			// 반복문으로 배열에서 상품 찾기
			isDup = 0;
			for (int i = 0; i < cnt; i++) {
				if (!strcmp(tmpName, arName[i])) {
					foundIdx = i;
					isDup = 1;
					break;
				}
			}

			// 삭제 작업 -> 삭제할 데이터 이후의 배열을 한 칸 앞으로 덮기
			if (isDup) {
				for (int i = foundIdx; i < cnt; i++) {
					// 예외처리
					if (i == 199) {
						strcpy_s(arName[i], sizeof(arName[i]), "");
					}
					else {
						strcpy_s(arName[i], sizeof(arName[i]), arName[i+1]);
					}
				}
				cnt--; // 배열에서 요소의 개수 감소시키기
			}
			// 삭제할 상품이 없으면 경고 출력
			else {
				printf("삭제할 상품이 존재하지 않습니다!\n");
			}
			break;
		case 5 : // 목록보기
			printf("(상품명 및 가격)\n");
			// 반복문으로 배열에 담긴 데이터 출력
			for (int i = 0; i < cnt; i++) {
				printf("%s - %d원\n", arName[i], arPrice[i]);
			}

			// 예외 처리
			if (cnt == 0) {
				printf("상품 없음~\n");
			}
			break;
		default :
			printf("잘못된 입력입니다!\n");
		}
	}

}
