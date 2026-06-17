#include<iostream>
#include<cmath>
#include<string>
using namespace std;

string s;

void work(int lim)
{
    int a = 0, b = 0; // 直接定义局部变量，彻底杜绝全局污染
    for (char i : s)
    {
        if (i == 'W') a++;
        else if (i == 'L') b++;
        // 修正：分差>=2，不是>2
        if (max(a, b) >= lim && abs(a - b) >= 2)
        {
            cout << a << ':' << b << endl;
            a = 0, b = 0;
        }
    }
    cout << a << ':' << b << endl;
}

int main()
{
    char c;
    while (cin >> c)
    {
        if (c == 'E') break;
        if (c == 'W' || c == 'L')
            s += c;
    }
    work(11);
    cout << endl; // 中间严格只空一行
    work(21);
    return 0;
}
