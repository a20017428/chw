#include <stdio.h>
#include <stdlib.h>

int main(){
	int s;
	printf("請輸入學生成績：");
	scanf("%d", &s);
	printf("成績分級為 ");
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
