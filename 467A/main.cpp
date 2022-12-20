// codeforces 467a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *p{new int[n]}, *q{new int[n]};
    int cnt{};
    for (int i{}; i < n; ++i) {
        cin >> p[i] >> q[i];
        if (q[i] - p[i] >= 2) {
            cnt++;
        }
    }
    delete[] p;
    delete[] q;
    cout << cnt << endl;
    return 0;
}
