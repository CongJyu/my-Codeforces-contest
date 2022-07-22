// codeforces 1708a

#include <iostream>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    bool ok{true};
    for (int i{1}; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            ok = false;
            break;
        }
    }
    delete[] a;
    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
