#include <stdio.h>
#include <malloc.h>

void Getmydata(int** q) {
	*q = (int*)malloc(8);
}


int main() {
	int* p;
	Getmydata(&p);
	*p = 5;
	free(p);
}