#include <iostream>
#include <stack>
using namespace std;

class Solution{
public:
    void push(int node){
        stackIn.push(node);
    }

    bool empty(){
        return (stackIn.empty()==true && stackOut.empty()==true);
    }

    int pop(){
        int node = -1;
        if (this ->empty() ==true){
            return -1;
        }else{
            if(stackOut.empty()==true){
                while(stackIn.empty() != true){
                    node = stackIn.top();
                    stackIn.pop();
                    stackOut.push(node);
                    cout<<node<<" enter outstack"<<endl;
                }
            }
            node =stackOut.top();
            stackOut.pop();
        }
        return node;
    }

private:
    stack<int> stackIn;
    stack<int> stackOut;

};

int main(){
    Solution solu;
    for(int i=0; i<5;i++){
        solu.push(i);
    }
    int node;
    while(solu.empty()!=true){
        cout << solu.pop() <<" escape outstack"<<endl;
    }
    return 0;
}
