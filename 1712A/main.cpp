// codeforces 1712a

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    int n{}, k{};
    cin >> n >> k;
    int *p{new int[n]}, *cp{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> p[i];
        cp[i] = p[i];
    }
    sort(cp, cp + n);
    int cnt{};
    for (int i{}; i < k; ++i) {
        if (p[i] > cp[k - 1]) {
            clog << p[i] << endl;
            cnt++;
        }
    }
    cout << cnt << endl;
    delete[] p;
    delete[] cp;
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
