#include <iostream>
#include <stack>
using namespace std;


struct ListNode {
    int val;
    struct ListNode *next;
 };

vector<int> printListFromTailToHead(ListNode* head) {
    std::stack<ListNode*> nodes;
    std::vector<int> value;
    ListNode* pNode = head;
    while(pNode != NULL){
        nodes.push(pNode);
        pNode = pNode->next;
    }
    while(!nodes.empty()){
        pNode = nodes.top();
        value.push_back(pNode->val);
        nodes.pop();
    }
    return value;
}

int main()
{
    //printListFromTailToHead()
    return 0;
}
