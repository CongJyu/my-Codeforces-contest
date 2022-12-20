// codeforces 1706a

#include <iostream>

using namespace std;

void solution() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    int *a{new int[n]};
    string b;
    for (int i{}; i < m; ++i) {
        b += "B";
    }
    for (int i{}; i < n; ++i) {
        cin >> a[i];
        a[i]--;
        a[i] = min(a[i], m - 1 - a[i]);
        if (b[a[i]] == 'B') {
            b[a[i]] = 'A';
        } else {
            b[m - a[i] - 1] = 'A';
        }
    }
    cout << b << endl;
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
