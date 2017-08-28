#include <iostream>
using namespace std;

/*
有面值为1、5、10、20、50、100的纸币
如何用最少的硬币凑够77元？
*/

int main()
{
    int a[] = {1,5,10,20,50,100};
    int sum=77;
    int dp[sum+1];

    dp[0]= 0;
    for(int i=0; i<=sum; i++){
        dp[i] = i; //状态
    }

    for (int i=1; i<=sum; i++){
        for(int j=0; j<6; j++){
            if(i>=a[j] && dp[i-a[j]] +1 < dp[i]){
                dp[i] = dp[i-a[j]]+1;   //状态转移方程
            }
        }
    }
    cout << dp[sum] <<endl;
    return 0;
}
