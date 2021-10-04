#include <stdio.h>
#include <stdlib.h>

int main(){
	int wh, s = 75;
	double sum = 0.0;
	int h[2] = {60, 75};
	double m[2] = {1.25, 1.75};
    printf("工作時數=");
    scanf("%d", &wh);
    if(wh<h[0])
        sum = wh*s;
    else{
        sum += h[0]*s;
        if(wh<h[1])
            sum += (wh-h[0])*s*m[0];
        else{
            sum += (h[1]-h[0])*s*m[0];
            sum += (wh-h[1])*s*m[1];

        }
    }

    printf("實領薪資=%.1lf元", sum);

    system("pause");

    return 0;
}
