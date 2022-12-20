// codeforces 1701a

#include <iostream>

using namespace std;

void solution() {
    ios::sync_with_stdio(false);
    int g[2][2]{0};
    cin >> g[0][0] >> g[0][1] >> g[1][0] >> g[1][1];
    if (g[0][0] + g[0][1] + g[1][0] + g[1][1] == 0) {
        cout << 0 << endl;
    } else if (g[0][0] + g[0][1] + g[1][0] + g[1][1] >= 1 and g[0][0] + g[0][1] + g[1][0] + g[1][1] <= 3) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
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
