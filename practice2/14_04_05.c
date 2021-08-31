#include <stdio.h>

void main() {
	int num;
	while (1) {
		printf(" your age? :");
		if (scanf("%d", &num) == 0) {
			rewind(stdin);
			printf("[ENTER]digit number!!!!\n");
		}
		else {
			if (num > 0 && num <= 130) {
				break;
			}
			else {
				printf("Incorrect age!!!!!!!\n");
			}
			printf(" your age : %d\n", num);
		}
		
	}
}