#include <stdio.h>
#include <stdlib.h>

int main(){
	double x, y;
	printf("�п�Jx�y�СG");
	scanf("%lf", &x);
	printf("�п�Jy�y�СG");
	scanf("%lf", &y);
	printf("�p�⵲�G��\n");
	printf("(%.1lf, %.1lf)����", x, y);
    if(x>0 && y>0)
        printf("�@�H��");
    else if(x<0 && y<0)
        printf("�T�H��");
    else if(x<0 && y>0)
        printf("�G�H��");
    else printf("�|�H��");
    printf("\n");

    system("pause");

    return 0;
}
