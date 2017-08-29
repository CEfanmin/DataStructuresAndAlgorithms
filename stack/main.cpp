#include <iostream>
#include "Stack.h"
#include <stdio.h>
using namespace std;

int main()
{
    int j;
    SqStack s;
    int e;
    if(InitStack(&s)==0){
         for(j=1;j<=10;j++){
             Push(&s,j);
         }
    }
    cout <<"栈中元素依次为:";
    StackTraverse(s);
    Pop(&s,&e);
    printf("弹出的栈顶元素 e=%d\n",e);
}
