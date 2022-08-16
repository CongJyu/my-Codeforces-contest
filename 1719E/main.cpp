// codeforces 1719e
// no idea

#include <iostream>
#include <algorithm>

using namespace std;

int fab(int w) {
    if (w == 1 or w == 2) {
        return 1;
    } else {
        return fab(w - 1) + fab(w - 2);
    }
}

bool is_fab(int x) {
    bool result{false};
    for (int i{1}; fab(i) < x; ++i) {
        if (fab(i + 1) == x) {
            result = true;
            break;
        }
    }
    return result;
}

void solution() {
    int k{};
    cin >> k;
    int *c{new int[k]};
    for (int i{}; i < k; ++i) {
        cin >> c[i];
    }
    sort(c, c + k);
    bool ok{true};
    for (int i{}; i < k; ++i) {
        if (!is_fab(c[i])) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    bool yes{is_fab(7)};
    clog << yes << endl;
    int t{};
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
