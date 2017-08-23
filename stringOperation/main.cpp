#include <iostream>
#include <vector>
using namespace std;

int main(){
    string org;
    cin>>org;
    vector <int> index;
    int len = org.size();
    //int res =0;

   for(int i=0; i<len; i++){
        if((org[i] == 'A') || (org[i] == 'B') ||(org[i] == 'C') ||(org[i] == 'D') ||(org[i] == 'E')){
            index.push_back(i);
        }
    }
    int maxv=0;
    for (int i =0; i<index.size(); i++){
        if (index[i+1]- index[i] > maxv){
            maxv = index[i+1]- index[i] -1;
        }
    }
    cout << maxv;
    return 0;
}
