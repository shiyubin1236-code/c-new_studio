//模拟写法
#include<iostream>
using namespace std;
int n,m;
const int N=1e5+10;
int f[N];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)  cin>>f[i];

    int t=m+1;
    int ans=0;
    while(t<=m+n)
    {
        for(int i=1;i<=m;i++)
        {
            f[i]--;
            if(f[i]==0)
            {
                f[i]=f[t];
                t++;
            }
        }
        ans++;
    }
    cout<<ans;
    return 0;
}
//小根堆写法
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int n,m;
int main()
{
    cin>>n>>m;
    vector<int>water(n+1);
    for(int i=1;i<=n;i++)  cin>>water[i];

    priority_queue<int,vector<int>,greater<int>>pq;

    for(int i=1;i<=m&&i<=n;i++)
    {
        pq.push(water[i]);
    }

    for(int i=m+1;i<=n;i++)
    {
        int earliest=pq.top();
        pq.pop();
        pq.push(earliest+water[i]);
    }

    int ans=0;
    while(!pq.empty())
    {
        ans=pq.top();
        pq.pop();
    }
    cout<<ans;
    return 0;
}
