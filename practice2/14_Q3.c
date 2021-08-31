#include <stdio.h>

void main() {
	char name[16];
	double weight;
	double height;
	char blood;
	int heart;


	scanf("%s %lf %lf %c %d", &name, &weight, &height, &blood, &heart);
	printf("이름 : %s, 몸무게 : %.1fkg , 키: %.1fcm , 혈액형: %c형 , 심박수: %d회\n", name, weight, height, blood, heart);

}