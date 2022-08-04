// codeforces 71a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.length() <= 10) {
            cout << s << endl;
        } else {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
    }
    return 0;
}
