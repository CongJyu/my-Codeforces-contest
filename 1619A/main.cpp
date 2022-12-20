// codeforces 1619a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int len{(int) s.length()};
        if (len % 2 != 0) {
            cout << "NO" << endl;
        } else {
            string before{s.substr(0, len / 2)}, after{s.substr(len / 2, len)};
            clog << before << " " << after << endl;
            if (before == after) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
