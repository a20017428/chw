#include <stdio.h>
#include <stdlib.h>

int FindMax(int[], int);
int FindMin(int[], int);

int fail = 0;

int main(){
	int i;
	double avg = 0.0;
	
	printf("成績有幾筆:");
	int len = 1;
	scanf("%d", &len);
	int *score = (int*)malloc(len*sizeof(int));
	
	printf("請輸入%d筆成績:\n", len);
	for(i = 0; i<len; ++i){
		scanf("%d", &score[i]);
		avg+=score[i];
	}
	avg/=len;
	
	printf("成績最高為%d最低為%d\n", FindMax(score, len), FindMin(score, len));
	printf("平均成績為%.1lf\n", avg);
	printf("不及格科目為%d科\n", fail);
	fail > (int)(len/2) ? printf("本學期二一*\n") : printf("本學期無二一\n");
	
	free(score);
    system("pause");

    return 0;
}

int FindMax(int score[], int len){
	int i, max = 0;
	for(i = 0; i<len; ++i){
		if(score[i]>max)
			max = score[i];
		if(score[i]<60)
			fail++;
	}
	
	return max;
}

int FindMin(int score[], int len){
	int i, min = 100;
		
	for(i = 0; i<len; ++i)
		if(score[i]<min)
			min = score[i];
	
	return min;
}


