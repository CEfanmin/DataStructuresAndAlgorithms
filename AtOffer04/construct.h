#ifndef CONS_H
#define CONS_H

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

class Solution {
public:
    struct TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in) {
		//  前序遍历的长度跟中序遍历的长度应该相同
        if(pre.size( ) != in.size( )){
            return NULL;
        }

        // 长度不能为0
        int size = pre.size( );
        if(size == 0){
            return NULL;
        }

        int length = pre.size( );
        int value = pre[0];      //  前序遍历的第一个结点是根节点
        TreeNode *root = new TreeNode(value);

        //  在中序遍历中查找到根的位置
        int rootIndex = 0;
        for(rootIndex = 0; rootIndex < length; rootIndex++)
        {
            if(in[rootIndex] == value)
            {
                break;
            }
        }
        if(rootIndex >= length)
        {
            return NULL;
        }

        ///  区分左子树和右子树
        ///  中序遍历中, 根左边的就是左子数, 右边的就是右子树
        ///  前序遍历中, 根后面是先遍历左子树, 然后是右子树
        ///  首先确定左右子树的长度, 从中序遍历in中确定
        int leftLength = rootIndex;
        int rightLength = length - 1 - rootIndex;
        vector<int> preLeft(leftLength), inLeft(leftLength);
        vector<int> preRight(rightLength), inRight(rightLength);
        for(int i = 0; i < length; i++)
        {
            if(i < rootIndex)
            {
                //  前序遍历的第一个是根节点, 根后面的(leftLegnth = rootIndex) - 1个节点是左子树, 因此是i+1
                preLeft[i] = pre[i + 1];
                //  中序遍历前(leftLength = rootIndex) - 1个节点是左子树, 第rootIndex个节点是根
                inLeft[i] = in[i];
            }
            else if(i > rootIndex)
            {
                //  前序遍历的第一个是根节点, 根后面的(leftLegnth = rootIndex) - 1个节点是左子树, 后面是右子树
                preRight[i - rootIndex - 1] = pre[i];
                //  中序遍历前(leftLength = rootIndex) - 1个节点是左子树, 第rootIndex个节点是根, 然后是右子树
                inRight[i - rootIndex - 1] = in[i];
                //debug <<preRight[i - rootIndex - 1] <<inRight[i - rootIndex - 1] <<" ";

            }
        }
        root->left = reConstructBinaryTree(preLeft, inLeft);
        root->right = reConstructBinaryTree(preRight, inRight);
        return root;
    }

};

#endif CONS_H


