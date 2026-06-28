#include<iostream>
#include<algorithm>
using namespace std;
int w,n;
const int N=1e5+10;
int f[N];
int main()
{
    cin>>w>>n;
    for(int i=1;i<=n;i++)  cin>>f[i];

    sort(f+1,f+n+1);

    int l=1;
    int r=n;
    int ans=0;
    while(l<=r)
    {
        if(f[l]+f[r]<=w)
        {
            l++;
            r--;
            ans++;
        }else{
            r--;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
