// codeforces 131a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    if (s.length() == 1) {
        if (s[0] >= 'a' and s[0] <= 'z') {
            s[0] += 'A' - 'a';
        } else {
            s[0] += 'a' - 'A';
        }
        cout << s << endl;
    } else {
        int low{}, up{};
        for (char i: s) {
            if (i >= 'a' and i <= 'z') {
                low++;
            } else {
                up++;
            }
        }
        if (up == (int) s.length()) {
            for (char &i: s) {
                i += 'a' - 'A';
            }
        } else if (low == 1 and s[0] >= 'a' and s[0] <= 'z' and up == (int) s.length() - 1) {
            s[0] += 'A' - 'a';
            for (int i = 1; i < (int) s.length(); ++i) {
                s[i] += 'a' - 'A';
            }
        }
        cout << s << endl;
    }
    return 0;
}
