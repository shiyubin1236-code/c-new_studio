#include<iostream>
#include<algorithm>
using namespace std;

const int N = 10005;
int f[N];
int n, m;

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) 
        cin >> f[i];
    
    // 执行 m 次 next_permutation
    for(int i = 0; i < m; i++) {
        next_permutation(f, f + n);
    }
    
    // 输出结果
    for(int i = 0; i < n; i++) {
        cout << f[i];
        if(i != n - 1) cout << ' ';  // 控制空格
    }
    cout << endl;
    
    return 0;
}
