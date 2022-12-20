// codeforces 141a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string a, b, c;
    cin >> a >> b >> c;
    int x[26]{}, y[26]{};
    for (int i{}; i < (int) a.length(); ++i) {
        x[a[i] - 'A']++;
    }
    for (int i{}; i < (int) b.length(); ++i) {
        x[b[i] - 'A']++;
    }
    for (int i{}; i < (int) c.length(); ++i) {
        y[c[i] - 'A']++;
    }
    bool ok{true};
    for (int i{}; i < 26; ++i) {
        if (x[i] != y[i]) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
