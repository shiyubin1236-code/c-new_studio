//一开始的暴力解法，有TLE
#include<iostream>
using namespace std;
int ans=0;
int p,q;


int gcd(int i,int j)
{
    while(j!=0)
    {
        int r=i%j;
        i=j;
        j=r;
    }
    return i;
}

int lcm(int i,int j)
{
    return i/gcd(i,j)*j;
}


int main()
{
    cin>>p>>q;
    for(int i=p;i<=q;i++)
    {
        for(int j=p;j<=q;j++)
        {
            if(gcd(i,j)==p&&lcm(i,j)==q) ans++;
        }
    }
    cout<<ans;
    return 0;
}


//结合数学原理解法，AC了
#include<iostream>
using namespace std;

// 统计n不同质因子的个数
int getPrimeCnt(int n)
{
    int cnt = 0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            cnt++;
            while(n%i == 0)
                n /= i;
        }
    }
    if(n>1) cnt++; // 剩下的大质数
    return cnt;
}

int main()
{
    int p,q;
    cin>>p>>q;
    if(q % p != 0)
    {
        cout<<0;
        return 0;
    }
    int k = q / p;
    int cnt = getPrimeCnt(k);
    // 2的cnt次方
    int ans = 1 << cnt;
    cout<<ans;
    return 0;
}
