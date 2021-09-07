#include <stdio.h>
#include <malloc.h> //malloc free 함수 사용

void main() {
	char* p_name;
	p_name = (char*)malloc(32);//32바이트 동적메모리할당 => char형으로 사용 1 => 32
	if (p_name != NULL) {
		//메모리 할당 성공
		printf("your name : ");
		gets(p_name);

		printf("Hi~ %s\n", p_name);
		free(p_name);
	}
	else {
		printf("Memory allocation error!!");
	}
}