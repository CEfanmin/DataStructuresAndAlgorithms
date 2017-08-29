#include<iostream>
#include<vector>
using namespace std;

//动态规划问题，和求最大递增序列差不多，每次遍历前面的数看是否能够到达当前位置
int GetCount(vector<int>& num)
{
    int n = num.size();
    vector<int> dp(n + 1, 10000);
    dp[0] = 1;
    for (int loc = 1; loc <= n; loc++)
    {
        for (int j = loc - 1; j >= 0; j--)
        {
            if (num[j] == 0)
                continue;
            if (j + num[j] >= loc)
                dp[loc] = min(dp[loc], dp[j] + 1);
        }
    }
    if (dp[n] == 10000)
        return -1;
    else
        return dp[n] - 1;
}

int main()
{
    int N = 0;
    cin >> N;
    vector<int> num(N,0);
    for (int i = 0; i < N; i++)
        cin >> num[i];
    cout << GetCount(num) << endl;
    return 0;
}
