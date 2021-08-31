#include <stdio.h>

void main() {
	char name[3][16];
	int Kscore[3], Escore[3], Mscore[3];
	int sum[3];
	int rank[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("%d 번째 학생 이름 :", i + 1);
		scanf("%s", name[i]);
		printf("국어 점수 :");
		scanf("%d", &Kscore[i]);
		printf("영어 점수 : ");
		scanf("%d", &Escore[i]);
		printf("수학 점수 : ");
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
		printf("이름 국어 영어 수학 총점 평균 등수\n");
		printf("-----------------------------------\n");

		for (i = 0; i < 3; i++) {
			printf("%s   %2d   %2d   %2d   %2d  %2d  %d등\n"
				, name[rank[i]], Kscore[rank[i]], Escore[rank[i]], Mscore[rank[i]], sum[rank[i]], sum[rank[i]] / 3, i + 1);
		}

		return 0;
	}
}
