#include <stdio.h>
#include <stdlib.h>

int main(){
	int l, s, offset;
	int penalty[6] = {1600, 1800, 2000, 8000, 12000, 24000};
	printf("�п�J�D�����t�G");
    scanf("%d", &l);
    printf("�п�J�H�W�������ɳt�G");
    scanf("%d", &s);
    offset = s-l;
    printf("�p�⵲�G��\n");
    if(offset<20)
        printf("�W�t%d�����A�@�ڪ��B�O$%d��\n", offset, penalty[0]);
    else if(offset<40)
        printf("�W�t%d�����A�@�ڪ��B�O$%d��\n", offset, penalty[1]);
    else if(offset<60)
        printf("�W�t%d�����A�@�ڪ��B�O$%d��\n", offset, penalty[2]);
    else if(offset<80)
        printf("�W�t%d�����A�@�ڪ��B�O$%d��\n", offset, penalty[3]);
    else if(offset<100)
        printf("�W�t%d�����A�@�ڪ��B�O$%d��\n", offset, penalty[4]);
    else printf("�W�t%d�����A�@�ڪ��B�O$%d��\n", offset, penalty[5]);

    system("pause");

    return 0;
}
