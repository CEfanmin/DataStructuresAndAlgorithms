#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, a ,res=0;
    cin >>n ;
    if (n>100 || n<1){
        res = -1;
        cout<< res <<endl;
        return 0;
    }
    vector <int> apple;
    vector <int> diffs;

    for (int i=0; i<n; i++){
        cin >>a;
        if(a>100 || a<1){
            res = -1;
            cout << res <<endl;
            return 0;
        }
        apple.push_back(a);
    }

    int sum=0;
    for (int i=0; i<n; i++){
        sum = sum + apple[i];
    }
    int flag = sum%n;
    if(flag != 0){
        res = -1;
        cout << res <<endl;
        return 0;
    }
    if(flag ==0){
        sort(apple.begin(), apple.end());
        int cont =0, diff =0, disum =0;
        int ave = sum/n;
        for(int i =0; i<n; i++){
            diff = ave - apple[i];
            if ((diff%2) !=0 ){
                res = -1;
                cout << res <<endl;
                return 0;
            }
            else{
                if(diff >0){
                    disum = disum +diff;
                }
            }

        }
        cont = disum/2;
        cout << cont <<endl;
    }
    return 0;
}


