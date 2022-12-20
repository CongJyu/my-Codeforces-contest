// codeforces 802g

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int cnt{};
    for (int i{}; i < (int) s.length(); ++i) {
        if (s[i] == 'h' and cnt == 0) {
            cnt = 1;
        } else if (s[i] == 'e' and cnt == 1) {
            cnt = 2;
        } else if (s[i] == 'i' and cnt == 2) {
            cnt = 3;
        } else if (s[i] == 'd' and cnt == 3) {
            cnt = 4;
        } else if (s[i] == 'i' and cnt == 4) {
            cnt = 5;
        }
    }
    if (cnt == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
