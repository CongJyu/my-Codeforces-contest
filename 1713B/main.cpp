// codeforces 1713b

#include <iostream>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    int flag{10001};
    for (int i{1}; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            flag = i;
            break;
        }
    }
    clog << flag << endl;
    bool is_down{true};
    for (int i{flag}; i < n - 1; ++i) {
        if (a[i] < a[i + 1]) {
            is_down = false;
            break;
        }
    }
    if (is_down) {
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
