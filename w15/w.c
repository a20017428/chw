#include <stdio.h>
#include <stdlib.h>

int main(){
	double t, w, bmi;
	printf("�п�J����(����)�G");
	scanf("%lf", &t);
    printf("�п�J�魫(����)�G");
    scanf("%lf", &w);
    t/=100;
    bmi = w/t/t;
    printf("�p�⵲�G��\n");
    printf("BMI=%lf\n", bmi);
    printf("�魫���Ŭ� ");
    if(bmi<18.5)
        printf("�魫�L��");
    else if(bmi<24)
        printf("���`�d��");
    else if(bmi<27)
        printf("�L��");
    else if(bmi<30)
        printf("���תέD");
    else if(bmi<35)
        printf("���תέD");
    else printf("���תέD");
    printf("\n");
    system("pause");

    return 0;
}
