#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 123, b = 456;
	int *ptr_a = &a, *ptr_b = &b;

	printf("ptr_a: %p, ptr_b: %d\n", ptr_a, ptr_b);

    system("pause");

    return 0;
}
