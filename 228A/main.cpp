// codeforces 228a

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    unsigned long long s[4]{};
    for (int i{}; i < 4; ++i) {
        cin >> s[i];
    }
    sort(s, s + 4);
    int cnt{};
    for (int i{1}; i < 4; ++i) {
        if (s[i] == s[i - 1]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
