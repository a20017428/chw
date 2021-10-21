#include <stdio.h>
#include <stdlib.h>

int main(){
	void swap(int*, int*);
	void sort(int[], int);
	int n;
	int a[3];
	scanf("%d", &n);
	while(n--){
	    scanf("%d %d %d", &a[0], &a[1], &a[2]);
	    sort(a, sizeof(a)/sizeof(a[0]));
	    if(a[0]+a[1]<=a[2])
	        printf("�D�T����");
	    else if(a[0]==a[1] && a[1]==a[2])
	        printf("���T����");
	    else if(a[0]==a[1] || a[1]==a[2])
	        printf("���y�T����");
	    else printf("�@��T����");
	    printf("\n");	
	}


    system("pause");

    return 0;
}

void swap(int *a, int *b){
    *a^=*b;
    *b^=*a;
    *a^=*b;
}

void sort(int a[], int n){
	int i, j;
    for(i = 0; i<n-1; ++i)
        for(j = 1; j<n; ++j)
            if(a[i]>a[j])
                swap(&a[i], &a[j]);
}

