#include <stdio.h>
#include <stdlib.h>

int main(){
    int p;
    printf("請輸入消費金額：");
    scanf("%d", &p);
    if(p>=1000) p*=0.8;
    printf("你的應付金額是：%d\n", p);
    system("pause");

    return 0;
}
