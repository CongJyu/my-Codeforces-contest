// codeforces 1713a
// no idea

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    int *x{new int[n + 1]}, *y{new int[n + 1]}, *z{new int[n + 1]};
    for (int i{}; i < n; ++i) {
        cin >> x[i] >> y[i];
        z[i] = 0;
    }
    x[n] = 0;
    y[n] = 0;
    z[n] = 0;
    int move{};
    int current_x{}, current_y{};
    int flag{}, min_step{10001};
    int cnt{};
    while (cnt < n) {
        for (int i{}; i < n; ++i) {
            if (abs(x[i] - current_x) + abs(y[i] - current_y) < min_step and z[i] == 0) {
                flag = i;
                min_step = abs(x[i] - current_x) + abs(y[i] - current_y);
            }
        }
        move += min_step;
        current_x = x[flag];
        current_y = y[flag];
        z[flag] = 1;
        cnt++;
    }
    move += abs(x[n] - current_x) + abs(y[n] - current_y);
    cout << move << endl;
    delete[] x;
    delete[] y;
    delete[] z;
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
