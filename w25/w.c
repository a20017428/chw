#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int i, n, p, s = 0;
	printf("2的指數和計算程式\n");
	printf("===========================\n");
	printf("請輸入最終值(>=1):");
	scanf("%d", &n);
	printf("結果為\n");
	for(i = 1; i<=n; ++i){
		p = pow(2, i);
		if(i<n)
			printf("%d+", p);
		else printf("%d=", p);
		s+=p;
	}
	printf("%d\n", s);
    system("pause");

    return 0;
}
