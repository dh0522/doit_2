#include <stdio.h>
void main() {

	int num1, num2, num3;
	double average;
	printf("세개의 정수를 입력하세요 : ");
	scanf("%d %d %d", &num1, &num2, &num3);


	average = (num1 + num2 + num3) / 3.0;

	printf("%lf", average);

}