#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, t;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &t);
		printf("%d個蛋一共是%d打，剩餘%d個蛋\n", t, t/12, t%12);
	}
    system("pause");

    return 0;
}
