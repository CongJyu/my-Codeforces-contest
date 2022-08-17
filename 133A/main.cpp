// codeforces 133a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    bool ok{false};
    for (int i{}; i < (int) s.length(); ++i) {
        if (s[i] == 'H' or s[i] == 'Q' or s[i] == '9') {
            ok = true;
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
