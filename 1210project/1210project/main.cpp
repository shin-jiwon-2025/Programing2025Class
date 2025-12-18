#include <stdio.h>

struct MyStruct { 
	int a;
	float b;
};

union MyUnion { 
	int a;
	float b;
};

int main() {
	struct MyStruct s;
	union MyUnion u;

	s.a = 10;
	s.b = 3.14f;

	u.a = 10;
	u.b = 3.14f;

	printf("=== 구조체 출력 ===\n"); // 변수마다 각각 다른 메모리를 지니고 있어서 여러개의 값을 동시에 유지할 수 있다.
	printf("s.a = %d\n", s.a); //s.a의 값도 지니고
	printf("s.b = %.2f\n", s.b);// s.b의 값도 지닌다

	printf("=== 공용체 출력 ===\n");//모든 변수가 한 메모리를 공유하고 있으므로 마지막에 저장한 값만 의미를 지닌다.
	printf("u.a = %d\n", u.a); //u.a의 값은 엉뚱한 값이 나오고
	printf("u.b = %.2f\n", u.b); // 마지막 저장한 값만 의미가 있다

	return 0;
}