// codeforces 1146a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int cnt{};
    for (int i{}; i < (int) s.length(); ++i) {
        if (s[i] == 'a') {
            cnt++;
        }
    }
    clog << cnt << endl;
    if ((int) s.length() - cnt >= cnt) {
        cout << 2 * cnt - 1 << endl;
    } else {
        cout << (int) s.length() << endl;
    }
    return 0;
}
