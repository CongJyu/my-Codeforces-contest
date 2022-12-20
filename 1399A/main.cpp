// codeforces 1399a

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    bool ok{true};
    for (int i{1}; i < n; ++i) {
        if (abs(a[i] - a[i - 1]) > 1) {
            ok = false;
        }
    }
    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    delete[] a;
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
