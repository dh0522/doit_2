#include <stdio.h>

int main2() {
	short birthday;
	short* ptr;
	ptr = &birthday;
	*ptr = 0x0412;
	
	printf("birthday = %d (0x%04X)\n", birthday, birthday);
}