#include <stdio.h>
#include <stdlib.h>

#define MAX 30

typedef struct Queue{
    int front, rear, n;
    int *array;
}queue;

void creat(queue *, int);
int isEmptyQ(queue *);
int isFullQ(queue *);
int AddQ(queue *, int);
int DeleteQ(queue *);

int main(){
    queue student;
    creat(&student, MAX);

    char number[MAX] = {'\0'};
    int order[MAX] = {0};

    char *token;

    int i = 0, j = 0;
    int k;

    while(1){
        printf("座號: ");
        gets(number);

        token = strtok(number," ");
        while (token != NULL){
            AddQ(&student, strtol(token, NULL, 10));
            token = strtok (NULL, " ");
        }

        while(!isEmptyQ(&student))
            order[j++] = DeleteQ(&student);

        printf("順序為: ");
        for(k = 0; order[k]!=0; ++k)
            printf("%d ", order[k]);
        printf("\n");
    }

    system("pause");

    return 0;
}

void creat(queue * q, int size){
    q->n = size;
    q->front = q->rear = -1;
    q->array = (int *)malloc(size*sizeof(int));
}

int isEmptyQ(queue *q){
    return q->front == q->rear;
}

int isFullQ(queue *q){
    return q->rear == q->n-1;
}

int AddQ(queue *q, int t){
    if(isFullQ(&q))
        return 0;
    else {
        q->array[++q->rear] = t;
        return 1;
    }
}

int DeleteQ(queue *q){
    int tmp = q->array[++q->front];
    if(q->front!=-1){ //把所有資料前移
        int i;
        for(i = q->front+1; i<=q->rear; ++i)
           q->array[i-(q->front+1)] = q->array[i];
        q->rear -= (q->front+1);
        q->front = -1;
    }
    return tmp;
}


