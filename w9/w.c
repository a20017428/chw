#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("���ƧP�_�{��\n");
    printf("===========================\n");
    printf("�п�J�Ʀr:");
    scanf("%d", &n);
    if(n&1)
        printf("%d�O�_��\n", n);
    else printf("%d�O����\n", n);

    system("pause");

    return 0;
}
