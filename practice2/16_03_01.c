#include <stdio.h>
#include <malloc.h> //malloc free �Լ� ���

void main() {
	char* p_name;
	p_name = (char*)malloc(32);//32����Ʈ �����޸��Ҵ� => char������ ��� 1 => 32
	if (p_name != NULL) {
		//�޸� �Ҵ� ����
		printf("your name : ");
		gets(p_name);

		printf("Hi~ %s\n", p_name);
		free(p_name);
	}
	else {
		printf("Memory allocation error!!");
	}
}