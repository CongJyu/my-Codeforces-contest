// 1704a

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    int n{}, m{};
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    bool equal{true};
    for (int i{}; i < m; ++i) {
        if (a[i] != b[i]) {
            equal = false;
            // 检查 i 位置
            if (i == m - 1) {
                // 检查 a 剩余部分是否有 1
                bool have_one{false}, have_zero{false};
                for (int j{i}; j < n; ++j) {
                    if (a[j] == '1') {
                        have_one = true;
                    } else if (a[j] == '0') {
                        have_zero = true;
                    }
                }
                if ((have_one and b[m - 1] == '1') or (have_zero and b[m - 1] == '0')) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
                break;
            } else {
                cout << "NO" << endl;
                break;
            }
        }
    }
    if (equal) {
        cout << "YES" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
