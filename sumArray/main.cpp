#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
    cin>>n;
    vector<int> in(n);
    for(int i=0;i<n;i++){
      cin>>in[i];
    }


    vector<int> dp(n);
    dp[0]=in[0];
    int maxVal=in[0];
    for(int i=1;i<n;i++)
    {
        dp[i]=max(in[i],dp[i-1]+in[i]); //动态规划问题，状态转移方程
        if(dp[i]>maxVal)
            maxVal=dp[i];
    }
    cout<<maxVal<<endl;
    return 0;
}
