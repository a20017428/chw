#include <stdio.h>
#include <stdlib.h>

int main(){
	int l, s, offset;
	int penalty[6] = {1600, 1800, 2000, 8000, 12000, 24000};
	printf("請輸入道路限速：");
    scanf("%d", &l);
    printf("請輸入違規車輛的時速：");
    scanf("%d", &s);
    offset = s-l;
    printf("計算結果為\n");
    if(offset<20)
        printf("超速%d公里，罰款金額是$%d元\n", offset, penalty[0]);
    else if(offset<40)
        printf("超速%d公里，罰款金額是$%d元\n", offset, penalty[1]);
    else if(offset<60)
        printf("超速%d公里，罰款金額是$%d元\n", offset, penalty[2]);
    else if(offset<80)
        printf("超速%d公里，罰款金額是$%d元\n", offset, penalty[3]);
    else if(offset<100)
        printf("超速%d公里，罰款金額是$%d元\n", offset, penalty[4]);
    else printf("超速%d公里，罰款金額是$%d元\n", offset, penalty[5]);

    system("pause");

    return 0;
}
