#ifndef STACK_H
#define STACK_H

const int MAXSIZE = 20;
typedef struct{
    int top;
    int data[MAXSIZE];
}SqStack;

typedef struct{
    int data[MAXSIZE];
    int top1;
    int top2;
}SqDoubleStack;

int Push(SqStack*S, int e);
int Pop(SqStack*S, int *e);
int InitStack(SqStack*S);
int StackTraverse(SqStack S);

#endif // STACK_H
