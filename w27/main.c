#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    char infix[MAX] = {'\0'} ;
    char postfix[MAX] = {'\0'} ;

    printf("infix: ");
    scanf("%s", infix);

    toPostfix(infix, postfix);

    printf("postfix: %s\n", postfix);

    system("pause");

    return 0;
}


