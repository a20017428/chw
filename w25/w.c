#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int i, n, p, s = 0;
	printf("2�����ƩM�p��{��\n");
	printf("===========================\n");
	printf("�п�J�̲׭�(>=1):");
	scanf("%d", &n);
	printf("���G��\n");
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
