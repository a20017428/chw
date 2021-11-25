#include <stdio.h>
#include <stdlib.h>

int main(){
	char ch = 'A';
	char *ptr_ch = &ch;

	*ptr_ch = 66;

	printf("%c\n", ch);

    system("pause");

    return 0;
}
