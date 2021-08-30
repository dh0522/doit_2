//연습문제 2
#include <stdio.h>

int main7() {
	int data = 0x12345678;
	short* p;
	p =(short *) &data;
	*p = 0x0412;

	
}