#include <stdio.h>

void main() {
	char name[3][16];
	int Kscore[3], Escore[3], Mscore[3];
	int sum[3];
	int rank[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("%d ��° �л� �̸� :", i + 1);
		scanf("%s", name[i]);
		printf("���� ���� :");
		scanf("%d", &Kscore[i]);
		printf("���� ���� : ");
		scanf("%d", &Escore[i]);
		printf("���� ���� : ");
		scanf("%d", &Mscore[i]);

		sum[i] = Kscore[i] + Escore[i] + Mscore[i];

	}
	if (sum[0] > sum[1]) {
		if (sum[1] > sum[2]) {
			rank[0] = 0;
			rank[1] = 1;
			rank[2] = 2;
		}
		else if (sum[0] > sum[2]) {
			rank[0] = 0;
			rank[1] = 2;
			rank[2] = 1;
		}
		else {
			rank[0] = 2;
			rank[1] = 0;
			rank[2] = 1;
		}
	}
	else {
		if (sum[1] < sum[2]) {
			rank[0] = 2;
			rank[1] = 1;
			rank[2] = 0;
		}
		else if (sum[0] > sum[2]) {
			rank[0] = 1;
			rank[1] = 0;
			rank[2] = 2;
		}
		else {
			rank[0] = 1;
			rank[1] = 2;
			rank[2] = 0;
		}


		printf("-----------------------------------\n");
		printf("�̸� ���� ���� ���� ���� ��� ���\n");
		printf("-----------------------------------\n");

		for (i = 0; i < 3; i++) {
			printf("%s   %2d   %2d   %2d   %2d  %2d  %d��\n"
				, name[rank[i]], Kscore[rank[i]], Escore[rank[i]], Mscore[rank[i]], sum[rank[i]], sum[rank[i]] / 3, i + 1);
		}

		return 0;
	}
}
