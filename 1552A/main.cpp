// codeforces 1552a

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    string s, cp;
    cin >> s;
    cp = s;
    sort(cp.begin(), cp.end());
    int cnt{};
    for (int i{}; i < n; ++i) {
        if (s[i] != cp[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
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
