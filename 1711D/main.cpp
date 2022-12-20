// codeforces 1711d

#include <iostream>

using namespace std;

void solution() {
    int n{}, m{};
    cin >> n >> m;
    int *x{new int[n]};
    int *p{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> x[i] >> p[i];
    }
    delete[] x;
    delete[] p;
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
