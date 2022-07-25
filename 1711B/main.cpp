// codeforces 1711B

#include <iostream>

using namespace std;

void solution() {
    long long n{}, m{};
    cin >> n >> m;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    int *x{new int[m]};
    int *y{new int[m]};
    int *unhappy{new int[m]};
    for (int i{}; i < m; ++i) {
        cin >> x[i] >> y[i];
        unhappy[i] = a[x[i]] + a[y[i]];
    }
    // no idea
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
