#include <iostream>
using namespace std;

/*
����ֵΪ1��5��10��20��50��100��ֽ��
��������ٵ�Ӳ�Ҵչ�77Ԫ��
*/

int main()
{
    int a[] = {1,5,10,20,50,100};
    int sum=77;
    int dp[sum+1];

    dp[0]= 0;
    for(int i=0; i<=sum; i++){
        dp[i] = i; //״̬
    }

    for (int i=1; i<=sum; i++){
        for(int j=0; j<6; j++){
            if(i>=a[j] && dp[i-a[j]] +1 < dp[i]){
                dp[i] = dp[i-a[j]]+1;   //״̬ת�Ʒ���
            }
        }
    }
    cout << dp[sum] <<endl;
    return 0;
}
