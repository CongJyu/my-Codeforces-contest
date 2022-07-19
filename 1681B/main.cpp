// codeforces 1681b

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        int n{};
        cin >> n;
        int *a{new int[n]};
        for (int i{}; i < n; ++i) {
            cin >> a[i];
        }
        int m{};
        cin >> m;
        int *b{new int[m]};
        int sum{};
        for (int i{}; i < m; ++i) {
            cin >> b[i];
            sum = (sum + b[i]) % n;
        }
        cout << a[sum] << endl;
        delete[] a;
        delete[] b;
    }
    return 0;
}
