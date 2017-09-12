#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <string.h>
#include <stdlib.h>
using namespace std;

int test1()
{
    /*
    计算出相邻2个同位数编码之间的距离，
    保存于base[4]中：
    base[4] = 1, 即aaaa与aaab之间相隔；
    base[3] = base[4]*25+1，即aaa与aab之间相隔；
    base[2] = 25*base[3] + 1，即aa与ab之间相隔；
    base[1] = 25*base[2]+1，即a与b之间相隔
    */
    char str[100];
    int base[4];
    while(cin>>str)
    {
        int len = strlen(str);
        base[3] = 1;
        for(int i=2;i>=0;i--){
            base[i] = base[i+1]*25+1;
        }

        int _index = 0;
        for(int j=0;j<len;j++)
        {
            _index += ((str[j]-'a')*base[j]+1 );
        }
        cout<<_index-1<<endl;
    }
    return 0;
}

int test2(){
    int res=0;
    unsigned  int id1=0, id2=0;
    cin >>id1>>id2;
    if (id1>1024 || id2 >1024 || id1<1 || id2 <1){
        return -1;
    }else {
        if (id1 == id2){
            cout << 1 <<endl;
        }else {
            cout << 0<<endl;;
        }
    }

}

int test3(){
    int n=0;
    cin >>n;
    if (n>100 || n<3){
        return 0;
    }else{
        vector <int> prime;
        bool m;
        for(int i = 1; i <= n; i ++){
           m = true;
           for(int j = 2; j < i; j ++){
                 if(i % j == 0){
                      m = false;
                      break;
             }
           }
           if(m){
                if (i>1){
                    prime.push_back(i);
                }
           }
        }
        int cont1=0,cont2=0,cont=0;
        for(int i=0;i<prime.size(); i++){
            for(int j=0; j<prime.size();j++){
                if ((prime[i]+prime[j] ==n) && (prime[i]== prime[j])){
                    cont1++;
                }
                if((prime[i]+prime[j] ==n) && (prime[i]!= prime[j]))
                   cont2++;
            }
        }
        cont = cont1+ cont2/2;
        if(cont>0){
            cout <<cont<<endl;
        }else{
            cout <<0<<endl;
        }
    }
    return 0;
}

int test4(){
    int n;
    cin >>n;
    int left = -90;
    int right = 90;
    vector<int> v;
    while (right -left >=5){
        int mid = (right+left)/2;
        if (n>=mid){
            v.push_back(1);
            left =mid;
        }else{
            v.push_back(0);
            right=mid;
        }
    }
    for(int i=0; i< v.size(); i++){
        cout << v[i];
    }
    return 0;
}

int main(){
    //test1();
    //test2();
    //test3();
    test4();

}
