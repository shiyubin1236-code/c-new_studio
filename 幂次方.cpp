#include<iostream>
#include<cmath>
using namespace std;
int n;

void power(int n)
{
    bool flag=false;
    while(n!=0)
    {
        int t=int(log2(n));
        if(flag==true) cout<<'+';
        if(t==1){
            cout<<'2';
        }else if(t==0){
            cout<<"2(0)";
        }else{
            cout<<"2(";
            power(t);
            cout<<')';
        }
        n-=pow(2,t);
        flag=true;
    }
}

int main()
{
    cin>>n;
    power(n);
    return 0;
}
