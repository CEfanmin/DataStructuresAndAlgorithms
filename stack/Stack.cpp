#include "Stack.h"
#include <stdio.h>
int Push(SqStack*S, int e){
    if(S->top == MAXSIZE-1){
        return -1;
    }
    S->top++;
    S->data[S->top] = e;
    return 0;
}
int Pop(SqStack*S, int *e){
    if(S->top==-1){
        return -1;
    }
    *e = S->data[S->top];
    S->top--;
    return 0;
}
int InitStack(SqStack*S){
    S->top = -1;
    return 0;
}
int StackTraverse(SqStack S)
{
    int i;
    i=0;
    while(i<=S.top)
    {
        printf("%d",S.data[i]);
        i++;
    }
    printf("\n");
    return 0;
}
