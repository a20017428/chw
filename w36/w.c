#include <stdio.h>
#include <stdlib.h>

void square(int*);

int main(){
	int i;
	int array[5] = {1, 2, 3, 4, 5};

	printf("before: ");
	for(i = 0; i<5; ++i)
		printf("%d ", array[i]);
	printf("\n");

	square(array);

	printf("after: ");
	for(i = 0; i<5; ++i)
		printf("%d ", array[i]);
	printf("\n");

    system("pause");

    return 0;
}

void square(int *array){
	int i;
	for(i = 0; i<5; ++i)
		array[i]*=array[i];
}
