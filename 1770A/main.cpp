// codeforces 1770a

#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
    return x > y;
}

void solution() {
    int n{}, m{};
    cin >> n >> m;
    long long *a{new long long[n]}, *b{new long long[m]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    for (int i{}; i < m; ++i) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m, cmp);
    if (m >= n) {
        for (int i{}; i < n; ++i) {
            a[i] = b[i];
        }
    } else {
        for (int i{}; i < m; ++i) {
            a[i] = b[i];
        }
    }
    long long result{};
    for (int i{}; i < n; ++i) {
        result += a[i];
    }
    cout << result << endl;
    delete[] a;
    delete[] b;
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
