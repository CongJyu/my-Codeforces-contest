// codeforces 1720b

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    long long *a{new long long[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << (a[n - 1] - a[0]) + (a[n - 2] - a[1]) << endl;
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
