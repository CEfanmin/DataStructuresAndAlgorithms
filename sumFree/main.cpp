#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,sum,temp;
    cin >> n;
    cin >> sum;
    vector <int> myarray;
    for(int i=0;i<n; i++){
        cin >> temp;
        myarray.push_back(temp);
    }

    int diff = 0;
    vector<int> diffs;
    for(int i=0; i<n; i++){
        diff = sum - myarray[i];
        if (diff>=0){
            diffs.push_back(diff);
        }
    }

    int num =0;
    int len = diffs.size();
    for (int i=0; i<len; i++){
        for(int j=0; j<n; j++){
            if(diffs[i]== myarray[j]){
                num++;
            }
        }
    }
    cout << num <<endl;
    return 0;
}
