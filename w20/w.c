#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, t;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &t);
		printf("%d�ӳJ�@�@�O%d���A�Ѿl%d�ӳJ\n", t, t/12, t%12);
	}
    system("pause");

    return 0;
}
