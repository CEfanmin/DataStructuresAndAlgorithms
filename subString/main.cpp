#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, t;
    cin >> s;
    cin >> t;

    int lens = s.size();
    int lent = t.size();
    if (lent >lens){
        cout << "No"<<endl;
    }
    int cou=0;
    for (int i=0; i<=lent; i++){
        for(int j=0; j<=lens; j++){
            if(s[j] == t[i]){
                j++;
                i++;
                cou++;
            }
        }
    }
    cout << cou<<endl;
    if (cou == lent){
        cout<< "Yes"<<endl;
    }
    else{
        cout <<"No" <<endl;
    }
}
