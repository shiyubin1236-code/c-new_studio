#include<iostream>
#include<string>
#include<cstring>
const int N = 1000;
int n,a[N],b[N],ans[N],la,lb,lans,temp[N],ltemp;
using namespace std;

void add(int ans[],int a[],int b[])
{
    for(int i=0;i<N;i++)  ans[i]=0;
    int len=max(la,lb);
    for(int i=0;i<len;i++)
    {
        ans[i]+=a[i]+b[i];
        ans[i+1]+=ans[i]/10;
        ans[i]%=10;
    }
    lans=len;
    if(ans[lans]) lans++;
    while(lans>1&&ans[lans-1]==0) lans--;
}

void mul(int ans[],int a[],int b[])
{
    for(int i=0;i<N;i++)  ans[i]=0;
    ltemp=la+lb;
    for(int i=0;i<la;i++)
    {
        for(int j=0;j<lb;j++)
        {
            ans[i+j]+=a[i]*b[j];
        }
    }
    for(int i=0;i<ltemp;i++)
    {
        ans[i+1]+=ans[i]/10;
        ans[i]%=10;
    }
    while(ltemp>1&&ans[ltemp-1]==0) ltemp--;
}


int main()
{
    cin>>n;

    memset(a,0,sizeof(a));
    la=1;
    a[0]=1;

    memset(ans,0,sizeof(ans));
    lans=1;


    for(int i=1;i<=n;i++)
    {
        string x;x=to_string(i);
        lb=x.size();
        for(int j=0;j<lb;j++)
        {
            b[j]=x[lb-1-j]-'0';
        }
        memset(temp,0,sizeof(temp));
        mul(temp,a,b);

        la=ltemp;
        for(int j=0;j<la;j++)
        {
            a[j]=temp[j];
        }

        int sum[N]={0};
        add(sum,ans,a);

        for(int j=0;j<lans;j++)
        {
            ans[j]=sum[j];
        }
        
    }
    for(int i=lans-1;i>=0;i--)
    {
        cout<<ans[i];
    }
    return 0;
} 
