#include <stdio.h>

void main() {

	// 애완동물 정보를 변수로 선언
	char* name = "고양이";
	int age = 3;
	char gender = 'M';
	float weight = 6.3F;

	// 제어문자
	// 반드시 따옴표 안에서 작성됨
	// '\n' -> new line(개행문자: 줄바꿈)
	// '\t' -> tab(위아래 줄 간격을 맞추어 띄기)
	// '\\' -> '\' 표현
	// "\'" -> "'" 표현
	// '\"' -> '"' 표현
	// 제어문자를 이용해 출력
	printf("이름: %s\n", name);
	printf("나이: %d살\n", age);
	printf("성별: \'%c\'\n", gender);
	printf("몸무게: %.1fkg\n", weight);

	// puts()
	// 문자열만 출력 + 줄바꿈이 자동으로 실행되는 메서드
	puts("\\문자열만 출력가능하지만 자동으로 개행해줌!\\");
	
}
