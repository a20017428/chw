#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 15, b = 16;
	int *ptr_a = &a, *ptr_b = &b;
	
	printf("%d\n", (*ptr_a)*(*ptr_b));

    system("pause");

    return 0;
}
