// codeforces 1779a

#include <iostream>
#include <string>

using namespace std;

void solution() {
    long long n{};
    cin >> n;
    string s;
    cin >> s;
    bool found{false};
    int position{-1};
    for (int i{1}; i < s.length(); ++i) {
        if (s[i - 1] == 'L' and s[i] == 'R') {
            position = i;
            break;
        } else if (s[i - 1] == 'R' and s[i] == 'L') {
            found = true;
            break;
        }
    }
    if (found) {
        cout << 0 << endl;
    } else {
        cout << position << endl;
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
