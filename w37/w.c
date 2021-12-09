#include <stdio.h>
#include <stdlib.h>

int FindMax(int[], int);
int FindMin(int[], int);

int fail = 0;

int main(){
	int i;
	double avg = 0.0;
	
	printf("���Z���X��:");
	int len = 1;
	scanf("%d", &len);
	int *score = (int*)malloc(len*sizeof(int));
	
	printf("�п�J%d�����Z:\n", len);
	for(i = 0; i<len; ++i){
		scanf("%d", &score[i]);
		avg+=score[i];
	}
	avg/=len;
	
	printf("���Z�̰���%d�̧C��%d\n", FindMax(score, len), FindMin(score, len));
	printf("�������Z��%.1lf\n", avg);
	printf("���ή��ج�%d��\n", fail);
	fail > (int)(len/2) ? printf("���Ǵ��G�@*\n") : printf("���Ǵ��L�G�@\n");
	
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


