#include <stdio.h>
#include <stdlib.h>

void InsertSort(int[]);


int main(){
	int i;
	int fail = 0;
	double avg = 0.0;
	int score[5];
	
	printf("�п�J5�����Z:\n");
	for(i = 0; i<5; ++i){
		scanf("%d", &score[i]);
		avg+=score[i];
	}
	avg/=5;
	
	InsertSort(score);
	
	for(i = 0; i<5; ++i)
		if(score[i]<60)
			fail++;
	
	printf("���Z�̰���%d�̧C��%d\n", score[4], score[0]);
	printf("�������Z��%.1lf\n", avg);
	printf("���ή��ج�%d��\n", fail);
	fail > (int)(5/2) ? printf("���Ǵ��G�@*\n") : printf("���Ǵ��L�G�@\n");
	
    system("pause");

    return 0;
}

void InsertSort(int score[]){
	int i;
	for(i = 1; i<5; ++i)
		Insert(score[i], score, i-1);
}

void Insert(int k, int score[], int i){
	while(k<score[i]){
		score[i+1] = score[i];
		i--;
	}
	
	score[i+1] = k;
}

