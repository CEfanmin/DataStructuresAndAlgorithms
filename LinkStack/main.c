#include <stdio.h>
#include <stdlib.h>

//Á´Õ»½á¹¹
typedef struct StackNode{
    int data;
    struct StackNode *next;
}StackNode, *LinkStackPtr;

typedef struct{
    LinkStackPtr top;
    int count;
}LinkStack;

int Push(LinkStack *S, int e){
    LinkStackPtr s =(LinkStackPtr)malloc(sizeof(StackNode));
    s->data = e;
    s->next = S->top;
    S->top = s;
    S->count++;
    return 0;

}

int Pop(LinkStack *S, int *e){
    LinkStackPtr p;
    *e = S->top->data;
    p = S->top;
    S->top = S->top->next;
    free(p);
    S->count--;
    return 0;
}


int main()
{
    LinkStack s;int e; int i;
    for (i=0; i<=10; i++){
        Push(&s, i);
    }
    Pop(&s, &e);
    return 0;
}
