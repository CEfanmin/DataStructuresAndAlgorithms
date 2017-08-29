#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string str;
    set<string> mat;
    int res= 0;
    int coun =0;
    while((cin>>str) && (coun<50)){
        if (str.size()>50){
            return 0;
        }
        if(mat.find(str) == mat.end()){
            res++;
            mat.insert(str);
        }else{
            continue;
        }
        coun++;
    }
    cout<<res <<endl;
    return 0;
}
