#include <stdio.h>
#include <stdlib.h>

int FindMax(int[]);
int FindMin(int[]);

int fail = 0;

int main(){
	int i;
	double avg = 0.0;
	int score[5];
	
	printf("�п�J5�����Z:\n");
	for(i = 0; i<5; ++i){
		scanf("%d", &score[i]);
		avg+=score[i];
	}
	avg/=5;
	
	printf("���Z�̰���%d�̧C��%d\n", FindMax(score), FindMin(score));
	printf("�������Z��%.1lf\n", avg);
	printf("���ή��ج�%d��\n", fail);
	fail > (int)(5/2) ? printf("���Ǵ��G�@*\n") : printf("���Ǵ��L�G�@\n");
	
    system("pause");

    return 0;
}

int FindMax(int score[]){
	int i, max = 0;
	
	for(i = 0; i<5; ++i){
		if(score[i]>max)
			max = score[i];
		if(score[i]<60)
			fail++;
	}
	
	return max;
}

int FindMin(int score[]){
	int i, min = 101;
		
	for(i = 0; i<5; ++i)
		if(score[i]<min)
			min = score[i];
	
	return min;
}


