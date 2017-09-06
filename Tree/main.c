#include <stdio.h>
#include <stdlib.h>

//创建二叉链表
typedef struct BiTNode{
    int data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;


//前序遍历
void PreOrderTravrse(BiTree T){
    if(T ==NULL){
        return;
    }
    printf("%c", T->data);
    PreOrderTravrse(T->lchild);
    PreOrderTravrse(T->rchild);
}

//中序遍历
void InOrderTraverse(BiTree T){
    if (T==NULL){
        return;
    }
    InOrderTraverse(T->lchild);
    printf("%c", T->data);
    InOrderTraverse(T->rchild);
}

//后续遍历
void PostOrderTraverse(BiTree T){
    if(T == NULL){
        return;
    }
    PostOrderTraverse(T->lchild);
    PostOrderTraverse(T->rchild);
    printf("%c", T->data);
}

//通过前序遍历来创建二叉树
void CreateBiTree(BiTree *T)
{
	char ch;
	scanf("%c",&ch);
	if(ch=='#')
		*T=NULL;
	else{
		*T=(BiTree)malloc(sizeof(BiTNode));
		if(!*T)
			return;

		(*T)->data=ch; /* 生成根结点 */
		CreateBiTree(&(*T)->lchild); /* 构造左子树 */
		CreateBiTree(&(*T)->rchild); /* 构造右子树 */
	}
}
//折半查找
int BinarySearch(int *a, int n, int key){
    int low, high, mid;
    low=1;
    high=n;
    while(low <= high){
        mid = (low + high)/2;
        if (key < a[mid]){
            high = mid -1;
        }
        else if(key > a[mid]){
            low = mid +1;
        }
        else
            return mid;
    }
    return 0;
}



int main()
{
    BiTree T;
    CreateBiTree(&T);

    return 0;
}
