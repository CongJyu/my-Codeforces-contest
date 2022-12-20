// codeforces 1301A

#include <iostream>
#include <string>

using namespace std;

void solution() {
    string a, b, c;
    cin >> a >> b >> c;
    bool ok{true};
    for (int i{}; i < (int) a.length(); ++i) {
        if (a[i] != c[i] and b[i] != c[i]) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << "YES " << endl;
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
