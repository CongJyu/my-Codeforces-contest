// codeforces 510a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    for (int i{1}; i <= n; ++i) {
        if (i % 2 != 0) {
            // 整行都是 '#'
            for (int j{}; j < m; ++j) {
                cout << "#";
            }
            cout << endl;
        } else {
            if (i % 4 == 2) {
                // 最右边是 '#'，其他是 '.'
                for (int j{}; j < m - 1; ++j) {
                    cout << ".";
                }
                cout << "#" << endl;
            } else if (i % 4 == 0) {
                // 最左边是 '#'，其他是 '.'
                cout << "#";
                for (int j{}; j < m - 1; ++j) {
                    cout << ".";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
