#include <stdio.h>
#include <stdlib.h>

void QuickSort(int[], int, int);

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
	
	for(i = 0; i<5; ++i)
		if(score[i]<60)
			fail++;
	
	QuickSort(score, 0, 4);
	
	printf("���Z�̰���%d�̧C��%d\n", score[4], score[0]);
	printf("�������Z��%.1lf\n", avg);
	printf("���ή��ؼ�%d��\n", fail);
	fail > (int)(5/2) ? printf("���Ǵ��G�@*\n") : printf("���Ǵ��L�G�@\n");
	
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

