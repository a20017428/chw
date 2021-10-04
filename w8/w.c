#include <stdio.h>
#include <stdlib.h>

int main(){
    double t, w; //init tall and weight
    scanf("%lf %lf", &t, &w); //input
    t/=100; //centimeter trans to meter
    printf("%lf", w/(t*t)); //output the result

    system("pause");

    return 0;
}
