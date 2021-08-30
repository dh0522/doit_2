#include <stdio.h>

int main1() {
	short birthday;
	short *ptr;
	ptr = &birthday;

	printf("birthday의 주소는 %p입니다.\n", ptr);
}