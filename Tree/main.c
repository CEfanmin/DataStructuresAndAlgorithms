#include <stdio.h>
#include <stdlib.h>

//������������
typedef struct BiTNode{
    int data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;


//ǰ�����
void PreOrderTravrse(BiTree T){
    if(T ==NULL){
        return;
    }
    printf("%c", T->data);
    PreOrderTravrse(T->lchild);
    PreOrderTravrse(T->rchild);
}

//�������
void InOrderTraverse(BiTree T){
    if (T==NULL){
        return;
    }
    InOrderTraverse(T->lchild);
    printf("%c", T->data);
    InOrderTraverse(T->rchild);
}

//��������
void PostOrderTraverse(BiTree T){
    if(T == NULL){
        return;
    }
    PostOrderTraverse(T->lchild);
    PostOrderTraverse(T->rchild);
    printf("%c", T->data);
}

//ͨ��ǰ�����������������
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

		(*T)->data=ch; /* ���ɸ���� */
		CreateBiTree(&(*T)->lchild); /* ���������� */
		CreateBiTree(&(*T)->rchild); /* ���������� */
	}
}
//�۰����
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
