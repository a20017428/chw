#include <stdio.h>
#include <stdlib.h>

void InsertSort(int[]);


int main(){
	int i;
	int fail = 0;
	double avg = 0.0;
	int score[5];
	
	printf("請輸入5筆成績:\n");
	for(i = 0; i<5; ++i){
		scanf("%d", &score[i]);
		avg+=score[i];
	}
	avg/=5;
	
	InsertSort(score);
	
	for(i = 0; i<5; ++i)
		if(score[i]<60)
			fail++;
	
	printf("成績最高為%d最低為%d\n", score[4], score[0]);
	printf("平均成績為%.1lf\n", avg);
	printf("不及格科目為%d科\n", fail);
	fail > (int)(5/2) ? printf("本學期二一*\n") : printf("本學期無二一\n");
	
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

