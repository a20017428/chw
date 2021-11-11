#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void toPostfix(char *infix, char *postfix){
    /* Algorithm
    input�ѥ���k���y

    �I�� ( �N�� ( ��J���|
    �I��  ) �h����pop����J�� )

    �I��B�⤸������X

    �I��B��l�h����u����
    �Y��e�B��l�v�� �p�󵥩� top�B��l���v��
    �h����pop
    �L�kpop��A���e�B��l��J���|

    �̫����pop ��X���|�ݯd���B��l
    */
    stack st;
    creat(&st, MAX);

    int i, j;
    for(i = 0, j = 0; infix[i]!='\0'; ++i){
        switch(infix[i]){
            case '(':
                   Add(&st, infix[i]);
                   break;

            case '+': case '-': case '*': case '/':
                while(priority(st.array[st.top])>=priority(infix[i]))
                    postfix[j++] = Delete(&st);
                Add(&st, infix[i]);
                break;

            case ')':
                while(peek(&st)!='(')
                        postfix[j++] = Delete(&st);
                break;

            default:
                postfix[j++] = infix[i];
        }
    }
    while(!isEmpty(&st))
            postfix[j++] = Delete(&st);
}
