#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int wh, s = 75;
	int h[2] = {60, 75};
	double m[2] = {1.25, 1.75};
	scanf("%d", &n);
	while(n--){
		double sum = 0;
	    printf("�u�@�ɼ�=");
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
	
	    printf("����~��=%.1lf��\n", sum);
	}


    system("pause");

    return 0;
}

