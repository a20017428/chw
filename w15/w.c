#include <stdio.h>
#include <stdlib.h>

int main(){
	double t, w, bmi;
	printf("請輸入身高(公分)：");
	scanf("%lf", &t);
    printf("請輸入體重(公斤)：");
    scanf("%lf", &w);
    t/=100;
    bmi = w/t/t;
    printf("計算結果為\n");
    printf("BMI=%lf\n", bmi);
    printf("體重分級為 ");
    if(bmi<18.5)
        printf("體重過輕");
    else if(bmi<24)
        printf("正常範圍");
    else if(bmi<27)
        printf("過重");
    else if(bmi<30)
        printf("輕度肥胖");
    else if(bmi<35)
        printf("中度肥胖");
    else printf("重度肥胖");
    printf("\n");
    system("pause");

    return 0;
}
