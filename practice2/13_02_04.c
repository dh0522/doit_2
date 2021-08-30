#include <stdio.h>


void Swap1(int* pa, int* pb) {
	int temp;
	temp = *pa;
	*pa =* pb;
	*pb = temp;
}


int main4() {

	int start = 95, end = 5;
	printf("before: start = %d end= %d\n", start, end);

	if (start > end) {

		Swap1(&start, &end);
	}

	printf("after : start=%d end =%d\n", start, end);
}