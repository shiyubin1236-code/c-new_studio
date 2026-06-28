#include<iostream>
using namespace std;
int n,m,l;


int gcd(int x,int y)
{
    return y==0?x:gcd(y,x%y);
}

int main()
{
    cin>>n>>m>>l;
    int ansi=l,ansj=1;
    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=l;j++)
        {
            if(gcd(i,j)==1&&i*m>=j*n&&i*ansj<j*ansi)
            {
                ansi=i;
                ansj=j;
            }
        }
    }
    cout<<ansi<<' '<<ansj;
    return 0;
    
}
