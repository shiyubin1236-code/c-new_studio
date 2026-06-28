#include<iostream>
using namespace std;
const int N=20005;
int n,m;
long long v[N],p[N];
long long f[50000];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>v[i]>>p[i];
        p[i]*=v[i];
    }

    for(int i=1;i<=m;i++)
    {
        for(int j=n;j>=v[i];j--)
        {
            f[j]=max(f[j],f[j-v[i]]+p[i]);
        }
    }
    cout<<f[n]<<endl;
    return 0;
}
