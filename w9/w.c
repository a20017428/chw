#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("案计耞祘Α\n");
    printf("===========================\n");
    printf("叫块计:");
    scanf("%d", &n);
    if(n&1)
        printf("%d琌计\n", n);
    else printf("%d琌案计\n", n);

    system("pause");

    return 0;
}
