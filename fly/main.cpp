#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> gridX;
        vector<int>  gridY;
        while(n-- >0)
        {
            int x,y;
            cin >> x >> y;
            gridX.push_back(x);
            gridY.push_back(y);
        }
        sort(gridX.begin(),gridX.end());
        sort(gridY.begin(),gridY.end());
        int edge = max(gridX.back() - gridX.front() ,gridY.back() - gridY.front());
        cout << edge*edge<<endl;
    }
    return 0;
}
