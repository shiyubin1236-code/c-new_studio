#include<iostream>
using namespace std;
int main()
{
    long long sum=0,product=1;
    long long num;
    char op;

    cin>>num;
    product=num%10000;

    while(cin>>op>>num)
    {
        if(op=='+')
        {
            sum=(sum+product)%10000;
            product=num%10000;
        }else{
            product=(product*(num%10000))%10000;
        }
    }
    sum=(sum+product)%10000;
    cout<<sum;
    return 0;
}
