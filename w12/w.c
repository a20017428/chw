#include <stdio.h>
#include <stdlib.h>

int main(){
    int g;
    printf("請輸入蛋的數量:");
    scanf("%d", &g);

    printf("計算結果為\n");
    printf("%d個蛋一共%d打，剩餘%d個蛋\n", g, g/12, g%12);
    system("pause");

    return 0;
}
