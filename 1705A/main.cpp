// codeforces 1705a

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    int n{}, x{};
    cin >> n >> x;
    int *a{new int[2 * n]};
    for (int i{}; i < 2 * n; ++i) {
        cin >> a[i];
    }
    sort(a, a + 2 * n);
    bool ok{true};
    for (int i{}; i < n; ++i) {
        if (a[i + n] - a[i] < x) {
            ok = false;
            break;
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
