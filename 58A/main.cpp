// codeforces 58a

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    vector<char> exp;
    int cnt{};
    for (int i{}; i < (int) s.length(); ++i) {
        if (s[i] == 'h' and cnt == 0) {
            cnt++;
            exp.push_back('h');
        } else if (s[i] == 'e' and cnt == 1) {
            cnt++;
            exp.push_back('e');
        } else if (s[i] == 'l' and cnt == 2) {
            cnt++;
            exp.push_back('l');
        } else if (s[i] == 'l' and cnt == 3) {
            cnt++;
            exp.push_back('l');
        } else if (s[i] == 'o' and cnt == 4) {
            cnt++;
            exp.push_back('o');
        }
    }
    if (!exp.empty() and exp.size() == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
