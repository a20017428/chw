#include <stdio.h>
#include <stdlib.h>

int main(){
	int s;
	printf("�п�J�ǥͦ��Z�G");
	scanf("%d", &s);
	printf("���Z���Ŭ� ");
	switch(s/10){
        case 9 : printf("A"); break;
        case 8 : printf("B"); break;
        case 7 : printf("C"); break;
        case 6 : printf("D"); break;
        default: printf("F");
	}
    printf("\n");
    system("pause");

    return 0;
}
