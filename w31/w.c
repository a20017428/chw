#include <stdio.h>
#include <stdlib.h>

void QuickSort(int[], int, int);

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
	
	for(i = 0; i<5; ++i)
		if(score[i]<60)
			fail++;
	
	QuickSort(score, 0, 4);
	
	printf("成績最高為%d最低為%d\n", score[4], score[0]);
	printf("平均成績為%.1lf\n", avg);
	printf("不及格科目數%d科\n", fail);
	fail > (int)(5/2) ? printf("本學期二一*\n") : printf("本學期無二一\n");
	
    system("pause");

    return 0;
}

void QuickSort(int score[], int l, int r){
	if(l<r){
		int pivot = Partition(score, l, r);
		QuickSort(score, l, pivot-1);
		QuickSort(score, pivot+1, r);
	}
}

int Partition(int score[], int l, int r){
	int pivot = score[r];
	int i = l-1;
	
	int j;
	for(j=l; j<r; ++j)
		if(score[j]<=pivot){
			i++;
			swap(&score[i], &score[j]);
		}
	
	i++;
	swap(&score[i], &score[r]);
	
	return i;
}

void swap(int *a, int *b){
    *a^=*b;
    *b^=*a;
    *a^=*b;
}

