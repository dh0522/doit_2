#include <stdio.h>
#include <string.h>
void main() {

	char string1[16], string2[16];
	printf("first string : ");
	fgets(string1, 16, stdin);
	printf("second string:");
	fgets(string2, 16, stdin);


	int length;
	length = strlen(string1);

	if (length > 0)	string1[length - 1] = 0;
	strcat(string1, string2);
	printf("%s\n", string1);
}