#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"
#include "io.h"
#include "math.h"
#include "time.h"

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

typedef struct Node *LinkList;

int InitList(LinkList *L)
{
    *L=(LinkList)malloc(sizeof(Node));
            return 0;
    (*L)->next=NULL;
    return 1;
}
void CreateListHead(LinkList *L, int n)
{
	LinkList p;
	int i;
	srand(time(0));                         /* 初始化随机数种子 */
	*L = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;                      /*  先建立一个带头结点的单链表 */
	for (i=0; i<n; i++)
	{
		p = (LinkList)malloc(sizeof(Node)); /*  生成新结点 */
		p->data = rand()%100+1;             /*  随机生成100以内的数字 */
		p->next = (*L)->next;
		(*L)->next = p;						/*  插入到表头 */
	}
}

int main(){
    LinkList L;
    LinkList p;
    int res =InitList(&L);

    CreateListHead(&L,10);
    p = L->next;
    while(p){
        printf("%d", p->data);
        printf(" ");
        p = p->next;
    }

    return 0;
}
