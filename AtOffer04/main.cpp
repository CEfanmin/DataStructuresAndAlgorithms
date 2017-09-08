#include "construct.h"

int main(){
    int pre[] = {1, 2, 4, 7, 3, 5, 6, 8};
    int in[] = {4, 7, 2, 1, 5, 3, 8, 6};

    vector<int> preOrder(pre, pre + 8);
    vector<int>  inOrder(in, in + 8);

    Solution solu;
    TreeNode *root = solu.reConstructBinaryTree(preOrder, inOrder);
    return 0;
}
