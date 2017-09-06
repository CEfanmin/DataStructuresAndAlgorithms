#include <iostream>
#include <vector>
using namespace std;

bool Find(vector<vector<int> > array, int target){
    bool find =false;
    int rowCount =array.size();  //行数
    int colCount = array[0].size();  //列数
    int i=0;
    int j = colCount -1;
    while (i<rowCount && j>=0){
        if(target == array[i][j]){
            find = true;
            break;
        }
        else if (target < array[i][j]){
            --j;
        }
        else {
            ++i;
        }
    }
    return find;
}


int main(){
    vector<vector<int> > vec;
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    vector<int> b;
    b.push_back(4);
    b.push_back(5);
    b.push_back(6);

    vec.push_back(a);
    vec.push_back(b);
    bool res = Find(vec , 9);
    cout << res <<endl;
}
