// codeforces 1720c

#include <iostream>

using namespace std;

/*
 * a[i][j]      a[i][j + 1]
 * a[i + 1][j]  a[i + 1][j + 1]
 */

void solution() {
    int n{}, m{};
    cin >> n >> m;
    char a[501][501]{'0'};
    for (int i{}; i < n; ++i) {
        for (int j{}; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int cnt{};
    for (int i{}; i < n - 1; ++i) {
        for (int j{}; j < m - 1; ++j) {
            if (a[i][j] - '0' + a[i][j + 1] - '0' + a[i + 1][j] - '0' + a[i + 1][j + 1] - '0' == 4) {
                cnt += 2;
                a[i][j] = '0';
                a[i][j + 1] = '0';
                a[i + 1][j] = '0';
                a[i + 1][j + 1] = '0';
            } else if (a[i][j] - '0' + a[i][j + 1] - '0' + a[i + 1][j] - '0' + a[i + 1][j + 1] - '0' == 3) {
                cnt += 2;
                a[i][j] = '0';
                a[i][j + 1] = '0';
                a[i + 1][j] = '0';
                a[i + 1][j + 1] = '0';
            } else if (a[i][j] - '0' + a[i][j + 1] - '0' + a[i + 1][j] - '0' + a[i + 1][j + 1] - '0' == 2) {
                cnt += 2;
                a[i][j] = '0';
                a[i][j + 1] = '0';
                a[i + 1][j] = '0';
                a[i + 1][j + 1] = '0';
            } else if (a[i][j] - '0' + a[i][j + 1] - '0' + a[i + 1][j] - '0' + a[i + 1][j + 1] - '0' == 1) {
                cnt++;
                a[i][j] = '0';
                a[i][j + 1] = '0';
                a[i + 1][j] = '0';
                a[i + 1][j + 1] = '0';
            }
        }
    }
    cout << cnt << endl;
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
