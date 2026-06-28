#include<iostream>
#include<algorithm>
using namespace std;
int n;
const int N=20005;
struct score{
    int c,m,e,s;
    int id;
}a[N];

bool cmp(struct score a,struct score b)
{
    if(a.s!=b.s) return a.s>b.s;
    if(a.c!=b.c) return a.c>b.c;
    if(a.id!=b.id) return a.id<b.id;
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].c>>a[i].m>>a[i].e;
        a[i].s=a[i].c+a[i].m+a[i].e;
        a[i].id=i;
    }

    sort(a+1,a+n+1,cmp);

    for(int i=1;i<=5;i++)
    {
        cout<<a[i].id<<' '<<a[i].s<<endl;
    }
    return 0;
    
}
