// codeforces 1715c

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    long long *a{new long long[n]};
    int *b{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
        b[i] = 0;
    }
    while (m--) {
        int i{}, x{};
        cin >> i >> x;
        a[i - 1] = x;
        long long sum{};
        b[0] = 1;
        for (int j{1}; j < n; ++j) {
            if (a[j - 1] != a[j]) {
                b[j] = b[j - 1] + 1;
            } else {
                b[j] = b[j - 1];
            }
        }
        for (int j{}; j < n; ++j) {
            for (int k{j}; k < n; ++k) {
                sum += b[k] - b[j] + 1;
            }
        }
        cout << sum << endl;
        fflush(stdout);
    }
    delete[] a;
    delete[] b;
    return 0;
}
