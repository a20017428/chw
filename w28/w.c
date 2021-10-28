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
char DeleteQ(queue *);

int main(){
    queue student;
    creat(&student, MAX);
    int number[MAX] = {0};
    int order[MAX] = {0};
    int i = 0, j = 0;

    while(1){
        printf("type \"enter\" then type \"ctrl + z\" when the input is complete\n");
        printf("座號: ");
        while(scanf("%d", &number[i])!=EOF){
            AddQ(&student, number[i++]);
        }

        while(!isEmptyQ(&student)){
            order[j++] = DeleteQ(&student);
        }

        printf("順序: ");
        int k = 0;
        while(order[k]!=0)
            printf("%d ", order[k++]);
        printf("\npress \"ctrl + c\" to EXIT\n\n");
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

char DeleteQ(queue *q){
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


