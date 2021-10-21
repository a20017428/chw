#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	for(i = 1; i<=20; ++i)
		printf("%d %d\n", i, (int)pow(i, 2));

    system("pause");

    return 0;
}
