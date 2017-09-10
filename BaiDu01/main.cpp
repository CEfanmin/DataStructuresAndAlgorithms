#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int test1()
{
    int n,cont=0;
    cin >>n;
    if (n>50){
        return 0;
    }
    int temp,res;
    set<int> val;
    set<int>::iterator iter;
    for (int i=0; i<n;i++){
        cin >>temp;
        val.insert(temp);
    }
    int len=val.size();
    if (len <3){
        res = -1;
    }else{
        //sort(val.begin(), val.end());
        for (iter = val.begin(); iter!=val.end();iter++){
            cont++;
            if (cont==3){
                res = *iter;
            }
        }
    }
    cout << res<< endl;
    return 0;
}

int test2(){
    int n;
    cin>>n;
    if(n<1 || n>50)
        return -1;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }

    unsigned int total = 0;
    for(int i=1; i<n; ++i){
       total += abs(a[i]-a[i-1]);
    }

    unsigned int temp = 0;
    unsigned int maxStep = 0;   //忽略某个点和不忽略 对于总长度的差值
    for(int i=1;i<n-1; ++i)
    {
        temp= abs(a[i]-a[i-1])+abs(a[i+1]-a[i])-abs(a[i+1]-a[i-1]);
        if(temp>maxStep)
            maxStep = temp;
    }
    cout<<total-maxStep;
    return 0;
}


int main(){
    //test1();
    test2();

}
