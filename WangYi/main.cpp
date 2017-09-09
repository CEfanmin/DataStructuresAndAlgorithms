#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

set<char> str;

int test1(){
    char ch;
    while(cin >> ch){
        str.insert(ch);
    }
    int num= str.size();
    if (num>2){
       num = 0;
    }
    cout << num << endl;
    return 0;
}

int test2(){
    int num=0;
    cin >> num;
    vector<int> shu;
    int temp,d;
    for(int i=0; i<num; i++){
        cin>>temp;
        shu.push_back(temp);
    }
    sort(shu.begin(), shu.end());
    d = shu[1]- shu[0];
    int flag =1;

    for(int i=2; i<=num-1; i++){
        if(shu[i] - shu[i-1]==d){
            continue;
        }
        else
            flag =0;
    }
    if(flag==0){
        cout<<"Impossible" <<endl;
    }else{
        cout<<"Possible"<<endl;
    }
    return 0;
}

int test3(){
    string s;
    cin >> s;
    int ans = 1, cnt = 1;
    int len = s.size();
    for(int i = 1; i < len; i++) {
        if(s[i] != s[i-1]) {
            cnt++;
        } else {
            cnt = 1;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}

int test5(){
    int x=0, f=0, d=0, p=0;
    cin >> x >> f >> d >>p;
    int day=0;
    if ((d - x*f) >=0){
        day = f+(d - x*f)/(x+p);
    }
    if (f > (d/x)){
        day = d/x;
    }
    cout << day <<endl;
    return 0;
}


struct Point
{
    int x=0;
    int y=0;
}A[55];

int dist(int x,int y,const Point& obj)
{
    return abs(x-obj.x)+abs(y-obj.y);
}

int test6(){

    int n;
    vector<vector<int> > vvec;
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>A[i].x;
    for(int i=1;i<=n;++i)
        cin>>A[i].y;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            vector<int> tmp;
            for(int k=1;k<=n;++k)
            {
                tmp.push_back(dist(A[i].x,A[j].y,A[k]));
            }
            sort(tmp.begin(),tmp.end());
            vvec.push_back(tmp);
        }
    }
    for(int k=1;k<=n;++k)
    {
        int ans=0x17171717;
        for(int i=0;i<vvec.size();++i)
        {
            int res=0;
            for(int j=0;j<k;++j)
                res+=vvec[i][j];
            ans=min(ans,res);
        }
        if(k==1)
            cout<<ans;
        else
            cout<<" "<<ans;
    }
    return 0;
}

int main(){
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    test6();
}
