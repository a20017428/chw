#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(){
	char *day[4] = {"MON", "TUE", "WED", "THU"};
	char *time[3] =  {"Period1", "Period2", "Period3"};
	double arr[3][4] = {
		{18.2, 17.3, 15.0, 13.4},
		{23.8, 25.1, 20.6, 17.8},
		{20.6, 21.5, 18.4, 15.7},
	};
	double rowAvg[3] = {0.0}, colAvg[4] = {0.0};
	double dMax = DBL_MIN, dMin = DBL_MAX;
	int maxRow = 0, maxCol = 0;
	int minRow = 0, minCol = 0;
	
	int i, j;
	for(i = 0; i<3; i++){
		for(j = 0; j<4; j++){
			printf("%.1lf ", arr[i][j]);
			
			colAvg[j]+=arr[i][j];
			rowAvg[i]+=arr[i][j];
			
			if(arr[i][j] > dMax){
				dMax = arr[i][j];
				maxRow = i;
				maxCol = j;
			}
			if(arr[i][j] < dMin){
				dMin= arr[i][j];
				minRow = i;
				minCol = j;
			}
		}
		printf("\n");
	}
	printf("\n");
	
	printf("day avg:\n");
	for(i = 0; i<4; ++i)
		printf("%s %.1lf  ", day[i], colAvg[i]);
		
	printf("\n\n");
	
	printf("period avg:\n");
	for(i = 0; i<3; ++i)
		printf("%s %.1lf  ", time[i], rowAvg[i]);
	
	printf("\n\n");
	
	printf("max TEMP\n");
	printf("%s %s", day[maxCol], time[maxCol]);
	
	printf("\n\n");
	
	printf("min TEMP\n");
	printf("%s %s", day[minCol], time[minRow]);
	
	printf("\n\n");

    system("pause");

    return 0;
}
