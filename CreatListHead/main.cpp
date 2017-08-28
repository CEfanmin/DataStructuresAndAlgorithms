#include "creat.h"

int main(){
    LinkList L, p;
    int res =InitList(&L);

    if (res ==0){
        printf("Initial error");
    }
    CreateListHead(&L,10);
    p = L->next;
    while(p){
        printf("%d", p->data);
        printf(" ");
        p = p->next;
    }
    ClearList(&L);

    int reslen = ListLength(L);
    printf("\nszie is :%d", reslen);
    return 0;
}
