#include <stdio.h>
#include <stdlib.h>

int MaxSize =10;
typedef struct SqQueue{
    int data[10];
    int front;
    int rear;
}SqQueue;


int InitQueue(SqQueue *Q){
    Q->rear=0;
    Q->front=0;
    return 0;
}

int EnQueue(SqQueue *Q, int e){
    if((Q->rear+1)%MaxSize ==Q->front){
        return -1;
    }
    Q->data[Q->rear] = e;
    Q->rear = (Q->rear+1)%MaxSize;
    return 0;
}

int DeQueue(SqQueue *Q, int*e){
    if(Q->front == Q->rear){
        return 0;
    }
    *e = Q->data[Q->front];
    Q->front = (Q->front+1)%MaxSize;
    return 0;
}



int main()
{
    SqQueue Q;
    InitQueue(&Q);
    int i=0;
    while(i<MaxSize){
        EnQueue(&Q, i);
        i++;
    }
    return 0;

}
