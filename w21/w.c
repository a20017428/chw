#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, p;
    scanf("%d", &n);
    while(n--){
	    scanf("%d", &p);
	    if(p>=1000) p*=0.8;
	    printf("�A�����I���B�O�G%d\n", p);	
	}

    system("pause");

    return 0;
}

