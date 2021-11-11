#ifndef __STACK__
#define __STACK__
#define MAX 30


typedef struct Stack{
    int top, n;
    char *array;
}stack;

void creat(stack *, int);
int isEmpty(stack *);
int isFull(stack *);
int Add(stack *, char);
char Delete(stack *);
char peek(stack *);
void toPostfix(char *, char *);
int priority(char);
#endif
