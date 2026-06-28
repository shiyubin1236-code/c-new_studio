#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    // 1. 计算所有矩形总数（包含正方形）
    // 使用 long long 防止溢出
    long long totalRectangles = (n * (n + 1) / 2) * (m * (m + 1) / 2);

    // 2. 计算正方形总数
    long long squares = 0;
    // 边长 k 从 1 到 min(n, m)
    long long limit = min(n, m);
    for (long long k = 1; k <= limit; k++) {
        squares += (n - k + 1) * (m - k + 1);
    }

    // 3. 计算长方形（不含正方形）
    long long rectangles = totalRectangles - squares;

    // 输出结果
    cout << squares << " " << rectangles << endl;

    return 0;
}
