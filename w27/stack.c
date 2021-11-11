#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


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



int priority(char op) {
    switch(op) {
        case '+': case '-': return 1;
        case '*': case '/':  return 2;
        default:                 return 0;
    }
}

