#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n, s = 1;
	printf("N階層計算程式\n");
	printf("===========================\n");
	printf("請輸入最終值(>=1):");
	scanf("%d", &n);
	for(i = 1; i<=n; ++i)
		s*=i;

	printf("結果為\n");
	printf("%d!=%d\n", n, s);

    system("pause");

    return 0;
}
