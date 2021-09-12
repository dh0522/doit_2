#include <stdio.h>
#include <malloc.h>


int main() {
	short** pp;//이차원 포인터
	pp = (short**)malloc(sizeof(short*));
	*pp = (short*)malloc(sizeof(short));

	**pp = 10;
	printf(" *pp : %d\n", **pp);
	free(*pp);
	free(pp);
		
}