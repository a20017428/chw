#include <stdio.h>
#include <stdlib.h>

int main(){

    int a[3];
    printf("�п�J�T���Ϊ��T���:\n");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    sort(a, sizeof(a)/sizeof(a[0]));
    if(a[0]+a[1]>a[2])
        printf("�o�O�ӤT����\n");
    else printf("�o���O�T����\n");
    system("pause");

    return 0;
}

void swap(int *a, int *b){
    *a^=*b;
    *b^=*a;
    *a^=*b;
}

void sort(int a[], int n){
    for(int i = 0; i<n-1; ++i)
        for(int j = 1; j<n; ++j)
            if(a[i]>a[j])
                swap(&a[i], &a[j]);
}
