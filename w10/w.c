#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("����ȭp��\n");
    printf("===========================\n");
    printf("�п�J�Ʀr:");
    scanf("%d", &n);
    printf("|%d|=%d\n", n, n>0 ? n:n*(-1));
    return 0;
}
