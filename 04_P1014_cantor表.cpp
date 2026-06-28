#include<iostream>
using namespace std;

void cantor(long long n)
{
    long long t = 0, sum = 0;
    // 找所在斜层t
    while (sum < n)
    {
        t++;
        sum += t;
    }
    // 前t-1层总和
    long long pre = sum - t;
    long long pos = n - pre;
    
    long long a, b;
    if (t % 2 == 0)
    {
        a = pos;
        b = t - pos + 1;
    }
    else
    {
        a = t - pos + 1;
        b = pos;
    }
    cout << a << "/" << b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    cantor(n);
    return 0;
}
