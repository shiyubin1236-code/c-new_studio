#include<iostream>
#include<cmath>
using namespace std;
int n;
const int N=20005;
int s[N];
bool first=true;
int main()
{
    cin>>n;
    for(int i=0;i<n+1;i++)  cin>>s[i];

    for(int i=0;i<n+1;i++)
    {
        int coe=s[i];
        int pos=n-i;
        if(coe==0)  continue;
        if(first)
        {
            if(coe<0)  cout<<'-';
            first=false;
        }
        else
        {
            if(coe>0) cout<<'+';
            else cout<<'-';
        }
        int abs_coe=abs(coe);
        if(pos==0)
        {
            cout<<abs_coe;
        }
        else
        {
            if(abs_coe!=1) cout<<abs_coe;
            cout<<'x';
            if(pos>1) cout<<'^'<<pos;
        }
    }
    if(first)
        cout<<0;
    return 0;
    

}
