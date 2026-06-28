#include<iostream>
#include<algorithm>
using namespace std;
const int N=20005;
int n,m,j;
struct scroeline{
    int k,s;
}a[N];
bool cmp(scroeline a,scroeline b)
{
    if(a.s!=b.s) return a.s>b.s;
    return a.k<b.k;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].k>>a[i].s;
    }

    sort(a+1,a+n+1,cmp);

    int pos=a[int(m*1.5)].s;
    cout<<pos<<' ';
    for(int i=n;i>=1;i--)
    {
        if(a[i].s>=pos)
        {
            j=i;
            break;
        }
    }
    cout<<j<<endl;
    for(int i=1;i<=j;i++)
    {
        cout<<a[i].k<<' '<<a[i].s<<endl;
    }
    return 0;
    
}
