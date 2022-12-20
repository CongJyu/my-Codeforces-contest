// codeforces 1716c

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    int m{};
    cin >> m;
    int *g{new int[m * 2]};
    for (int i{}; i < m * 2; ++i) {
        cin >> g[i];
    }
    sort(g, g + m * 2);
    int time;
    int d_to_zero{}, first{};
    for (int i{}; i < m * 2; ++i) {
        if (g[i] == 0) {
            d_to_zero++;
        } else {
            first = g[i];
            break;
        }
    }
    if (g[m * 2 - 1] <= m * 2 - 1) {
        time = m * 2 - 1;
    } else if (first < m * 2 - 1) {
        time = g[m * 2 - 1] + first - 1;
    } else {
        time = g[m * 2 - 1] + d_to_zero;
    }
    cout << time << endl;
    delete[] g;
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
