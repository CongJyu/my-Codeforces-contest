// problem c

#include <iostream>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cnt = 0;
        if (s.length() == 1) {
            cout << 1 << endl;
            continue;
        }
        int flag = 0;
        for (int i = 0; i < (int)s.length(); ++i) {
            for (int j = i; j < (int)s.length(); ++j) {
                if (s[j] != '?' && s[j] != '0') {
                    flag = 1;
                }
                cnt++;
                if (s[j] == '0' || s[j + 1] == '?') {
                    flag = 2;
                }
            }
            if (flag == 1) {
                cnt = 0;
            } else if (flag == 2) {
                cout << cnt << endl;
                break;
            }
        }
    }
    return 0;
}
