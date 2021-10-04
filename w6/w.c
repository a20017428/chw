#include <stdio.h>
#include <stdlib.h>

int main(){
    double t, w;
    scanf("%lf %lf", &t, &w);
    t/=100;
    printf("%lf", w/t/t);

    system("pause");

    return 0;
}
