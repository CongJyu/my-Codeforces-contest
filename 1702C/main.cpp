// codeforces 1702c

#include <iostream>
#include <map>

using namespace std;

void solution() {
    ios::sync_with_stdio(false);
    int n{}, k{};
    cin >> n >> k;
    map<int, pair<int, int>> m;
    for (int i{}; i < n; ++i) {
        int u{};
        cin >> u;
        if (!m.count(u)) {
            m[u].first = i;
            m[u].second = i;
        } else {
            m[u].second = i;
        }
    }
    for (int i{}; i < k; ++i) {
        int a{}, b{};
        cin >> a >> b;
        if (!m.count(a) || !m.count(b) || m[a].first > m[b].second) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
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
