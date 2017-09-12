#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <math.h>
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
    for(int i=1;i<n-1; ++i){
        temp= abs(a[i]-a[i-1])+abs(a[i+1]-a[i])-abs(a[i+1]-a[i-1]);
        if(temp>maxStep)
            maxStep = temp;
    }
    cout<<total-maxStep;
    return 0;
}

struct Point{
    char c;
    int x,y,z;
};

//计算三角形面积
double calculate(const Point &a,const Point &b,const Point &c)
{
    double b1=0,b2=0,b3=0;
    double s = 0;
    //海伦公式
    b1 = sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)+pow(a.z-b.z,2)); //边长
    b2 = sqrt(pow(a.x-c.x,2)+pow(a.y-c.y,2)+pow(a.z-c.z,2));
    b3 = sqrt(pow(c.x-b.x,2)+pow(c.y-b.y,2)+pow(c.z-b.z,2));
    if( (b1+b2)<=b3 || (b1+b3)<=b2 || (b2+b3)<=b1){
        return 0;
    }

    double temp = (b1+b2+b3)/2;     //半周长
    s = sqrt(temp*(temp-b1)*(temp-b2)*(temp-b3)); //面积
    return s;
}

int test3()
{
    Point points[50];
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
        cin>>points[i].c>>points[i].x>>points[i].y>>points[i].z;
    double big = 0;         //面积
     double s = 0;
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            for(int k=j+1; k<n; ++k)
            {
                if( (points[i].c==points[j].c && points[j].c==points[k].c)||
                    (points[i].c!=points[j].c && points[j].c!=points[k].c && points[i].c!=points[k].c))
                {
                    s = calculate(points[i],points[j],points[k]);
                    if(s>big)
                        big = s;
                }

            }
        }
    }
    printf("%.5lf",big);
    return 0;
}

int test4(){
    int n=0, cont=0,temp;
    cin >> n;
    if(n>50 || n<0){
        return -1;
    }
    vector<int> myArray;
    vector<int> copyArray;
    for(int i=0;i<n ;i++){
        cin>>temp;
        myArray.push_back(temp);
    }
    copyArray.assign(myArray.begin(),myArray.end());
    sort(myArray.begin(), myArray.end());
    int j=0;
    for(int i=0; i<n; i++){
        if(copyArray[i] == myArray[j]){
            j++;
            if(j==n){
                break;
            }
        }
    }
    cout << n-j <<endl;
    return cont;
}

int test5(){
    int n,k;
    cin>>n>>k;
    int a[n+1][k+1];
    memset(a,0,sizeof(a));
    for(int i=1; i<=n; ++i)
        a[i][0] = 1;
    for(int i=2; i<=n; ++i)
    {
        for(int j=1; j<=(i-1)&&j<=k; ++j)
        {
            a[i][j] = (a[i-1][j]*(j+1)+a[i-1][j-1]*(i-j))%2017;
        }
    }
    cout<<a[n][k];
    return 0;
}

int main(){
    //test1();
    //test2();
    //test3();
    //test4();
    test5();
}
