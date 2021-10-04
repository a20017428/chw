#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("絕對值計算\n");
    printf("===========================\n");
    printf("請輸入數字:");
    scanf("%d", &n);
    printf("|%d|=%d\n", n, n>0 ? n:n*(-1));
    return 0;
}
