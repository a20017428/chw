#include <stdio.h>
#include <stdlib.h>

int main(){
	double x, y;
	printf("請輸入x座標：");
	scanf("%lf", &x);
	printf("請輸入y座標：");
	scanf("%lf", &y);
	printf("計算結果為\n");
	printf("(%.1lf, %.1lf)位於第", x, y);
    if(x>0 && y>0)
        printf("一象限");
    else if(x<0 && y<0)
        printf("三象限");
    else if(x<0 && y>0)
        printf("二象限");
    else printf("四象限");
    printf("\n");

    system("pause");

    return 0;
}
