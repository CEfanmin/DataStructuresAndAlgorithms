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
    cout <<"ջ��Ԫ������Ϊ:";
    StackTraverse(s);
    Pop(&s,&e);
    printf("������ջ��Ԫ�� e=%d\n",e);
}
