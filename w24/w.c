#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n, s = 1;
	printf("N���h�p��{��\n");
	printf("===========================\n");
	printf("�п�J�̲׭�(>=1):");
	scanf("%d", &n);
	for(i = 1; i<=n; ++i)
		s*=i;

	printf("���G��\n");
	printf("%d!=%d\n", n, s);

    system("pause");

    return 0;
}
