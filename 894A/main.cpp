// codeforces 894a
// no idea

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    if (s.length() < 3) {
        cout << 0 << endl;
    } else {
        int cnt{};
        for (int i{1}; i < (int) s.length() - 1; ++i) {
            if (s[i - 1] == 'Q' and s[i] == 'A' and s[i + 1] == 'Q') {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
