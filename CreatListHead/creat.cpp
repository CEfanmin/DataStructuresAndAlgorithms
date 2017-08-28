#include "creat.h"

int InitList(LinkList *L)
{
    *L=(LinkList)malloc(sizeof(Node)); /*ͷָ��*/
    if(!(*L))
        return 0;
    (*L)->next=NULL;
    return 1;
}
void CreateListHead(LinkList *L, int n)
{
	LinkList p;
	int i;
	srand(time(0));                         /* ��ʼ����������� */
	*L = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;                      /*  �Ƚ���һ����ͷ���ĵ����� */

	for (i=0; i<n; i++)
	{
		p = (LinkList)malloc(sizeof(Node)); /*  �����½�� */
		p->data = rand()%100+1;             /*  �������100���ڵ����� */
		p->next = (*L)->next;
		(*L)->next = p;						/*  ���뵽��ͷ */
	}
}

void ClearList(LinkList* L){
    LinkList p, q;
    p = (*L)->next;
    while(p){
        q = p->next;
        free(p);
        p = q;
    }
    (*L)->next = NULL;
}
int ListLength(LinkList L)
{
    int i=0;
    LinkList p=L->next; /* pָ���һ����� */
    while(p)
    {
        i++;
        p=p->next;
    }
    return i;
}

