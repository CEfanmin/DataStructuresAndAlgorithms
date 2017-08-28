#ifndef CREAT_H
#define CREAT_H

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

typedef struct Node* LinkList;
int ListLength(LinkList L);
int InitList(LinkList *L);
void CreateListHead(LinkList *L, int n);
void ClearList(LinkList *L);

#endif // CREAT_H
