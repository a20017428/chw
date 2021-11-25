#include <stdio.h>
#include <stdlib.h>

int FindMaxIndex(int[]);

int main(){
	int i;
	int array[] = {4,2,3,1,5};

	printf("array: ");
	for(i = 0; i<5; ++i)
		printf("%d ", array[i]);
	printf("\n");

	int idx = FindMaxIndex(array);
	printf("max number: %d, index: %d\n", array[idx], idx);

    system("pause");

    return 0;
}

int FindMaxIndex(int array[]){
	int i, j ,max = 0;

	for(i = 0; i<4; ++i){
		for(j = 1; j<5; ++j){
			if(array[j] > array[i])
				max = j;
		}
	}

	return max;
}
