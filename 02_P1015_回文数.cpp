#include<iostream>
#include<string>
#include<cstring>
using namespace std;
const int N = 300;
int n,lc,d[N],len,temp[N],c[N];
char x[N];

void add()
{
    memset(temp,0,sizeof(temp));
    memset(d,0,sizeof(d));
    for(int i=0;i<lc;i++) d[i]=c[lc-1-i];
    len=lc;
    for(int i=0;i<len;i++)
    {
        temp[i]+=c[i]+d[i];
        temp[i+1]+=temp[i]/n;
        temp[i]%=n;
    }
    while(temp[len] > 0)
    {
        temp[len+1] += temp[len] / n;
        temp[len] %= n;
        len++;
    }

    while(len>1&&temp[len-1]==0)  len--; 
    lc=len;
    memset(c,0,sizeof(c));
    for(int i=0;i<lc;i++)
    {
        c[i]=temp[i];
    }
}

bool judge()
{
    for(int i=0;i<lc/2;i++)
    {
        if(c[i]!=c[lc-1-i]) return false;
    }
    return true;
}


int main()
{
    cin>>n>>x;
    lc=strlen(x);
    memset(c,0,sizeof(c));
    for(int i=0;i<lc;i++)
         {
             char ch = x[lc - 1 - i];
             if(ch >= '0' && ch <= '9')
                 c[i]=ch-'0';
             else
                 c[i]=ch-'A'+10;
         }

    int pos=0;
    while(!judge())
    {
        pos++;
        if(pos>=30)  break;
        add();
    }

    if(pos>=30) cout<<"Impossible!";
    else cout<<"STEP="<<pos;
    return 0;
    
}
