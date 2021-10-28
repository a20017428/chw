#include <stdio.h>
#include <stdlib.h>

#define MAX 30

struct Stack;
void toPostfix(char *, char *);
int priority(char);

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

typedef struct Stack{
    int top, n;
    char *array;
}stack;

void creat(stack * st, int size){
    st->top = -1;
    st->n = size;
    st->array = (char *)malloc(size*sizeof(char));
}

int isEmpty(stack * st){
    return st->top==-1;
}

int isFull(stack * st){
    return st->top==st->n-1;
}

int Add(stack * st, char t){
    if(isFull(st))
        return 0;
    else {
        st->array[++st->top] = t;
        return 1;
    }
}

char Delete(stack * st){
    if(isEmpty(st))
        return 0;
    else
        return st->array[st->top--];

}

char peek(stack *st){
    return st->array[st->top];
}

void toPostfix(char *infix, char *postfix){
    /* Algorithm
    input由左到右掃描

    碰到 ( 就把 ( 放入堆疊
    碰到  ) 則持續pop直到遇見 )

    碰到運算元直接輸出

    碰到運算子則比較優先性
    若當前運算子權限 小於等於 top運算子的權限
    則持續pop
    無法pop後再把當前運算子放入堆疊

    最後持續pop 輸出堆疊殘留的運算子
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

int priority(char op) {
    switch(op) {
        case '+': case '-': return 1;
        case '*': case '/':  return 2;
        default:                 return 0;
    }
}
