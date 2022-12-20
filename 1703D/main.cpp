// codeforces 1703d
// TLE

#include <iostream>
#include <string>

using namespace std;

void solution() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    string *s{new string[n]};
    for (int i{}; i < n; ++i) {
        cin >> s[i];
    }
    for (int i{}; i < n; ++i) {
        bool ok{false};
        for (int j{}; j < n; ++j) {
            for (int k{}; k < n; ++k) {
                if (s[i] == s[j] + s[k] or s[i] == s[k] + s[i]) {
                    ok = true;
                    break;
                }
            }
            if (ok) {
                break;
            }
        }
        if (ok) {
            cout << 1;
        } else {
            cout << 0;
        }
    }
    delete[] s;
    cout << endl;
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
