//递归写法
#include<iostream>
using namespace std;
const int N = 20;
long long dp[N][N]; // dp[i][j]: 已经push了i次，pop了j次

int main() {
    int n;
    cin >> n;
    dp[0][0] = 1;
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= i; j++) { // pop次数不能超过push次数
            if(i < n) dp[i+1][j] += dp[i][j];   // push
            if(j < i) dp[i][j+1] += dp[i][j];   // pop (且pop次数 < push次数)
        }
    }
    cout << dp[n][n]; // push n次，pop n次
    return 0;
}

//卡特兰数
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long catalan[20] = {0};
    catalan[0] = 1;
    
    for(int i = 1; i <= n; i++) {
        // 卡特兰数递推：C_n = sum(C_i * C_{n-1-i})
        for(int j = 0; j < i; j++) {
            catalan[i] += catalan[j] * catalan[i-1-j];
        }
    }
    
    cout << catalan[n] << endl;
    return 0;
}
