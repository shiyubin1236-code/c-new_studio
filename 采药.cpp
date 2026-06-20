#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
int t,m;
const int N = 1005;
using namespace std;
int main()
{
    cin>>t>>m;
    vector<int>time_(m+1),v(m+1);
    for(int i=1;i<=m;i++)  cin>>time_[i]>>v[i];

    int dp[N]={0};
    for(int i=1;i<=m;i++)
    {
        for(int j=t;j>=time_[i];j--)
        {
            dp[j]=max(dp[j],dp[j-time_[i]]+v[i]);
        }
    }
    cout<<dp[t];
    return 0;
}
