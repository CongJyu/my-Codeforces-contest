// codeforces 1779b

#include <iostream>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    if (n == 3) {
        cout << "NO" << endl;
    } else {
        if (n % 2 == 0) {
            cout << "YES" << endl;
            for (int i{}; i < n; ++i) {
                if (i % 2 == 0) {
                    cout << 1 << " ";
                } else {
                    cout << -1 << " ";
                }
            }
            cout << endl;
        } else {
            cout << "YES" << endl;
            for (int i{}; i < n; ++i) {
                if (i % 2 == 0) {
                    cout << (n - 1) / 2 - 1 << " ";
                } else {
                    cout << -(n - 1) / 2 << " ";
                }
            }
        }
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
