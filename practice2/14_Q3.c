#include <stdio.h>

void main() {
	char name[16];
	double weight;
	double height;
	char blood;
	int heart;


	scanf("%s %lf %lf %c %d", &name, &weight, &height, &blood, &heart);
	printf("�̸� : %s, ������ : %.1fkg , Ű: %.1fcm , ������: %c�� , �ɹڼ�: %dȸ\n", name, weight, height, blood, heart);

}