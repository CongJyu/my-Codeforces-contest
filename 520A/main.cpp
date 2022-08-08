// codeforces 520a

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    string pan;
    cin >> pan;
    transform(pan.begin(), pan.end(), pan.begin(), ::tolower);
    int c[26]{};
    for (int i{}; i < n; ++i) {
        c[pan[i] - 'a']++;
    }
    bool is_pan{true};
    for (int i{}; i < 26; ++i) {
        if (c[i] == 0) {
            is_pan = false;
        }
    }
    if (is_pan) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
