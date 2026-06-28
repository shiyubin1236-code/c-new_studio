#include<iostream>
using namespace std;
int v,n;
const int N = 20005;
int wei[N],vel[N];
int f[N];
int main()
{
    cin>>v>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>wei[i];
        vel[i]=wei[i];
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=v;j>=wei[i];j--)
        {
            f[j]=max(f[j],f[j-wei[i]]+vel[i]);
        }
    }
    cout<<v-f[v];
    return 0;

}
