// codeforces 432a

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, k{};
    cin >> n >> k;
    int *y{new int[n]};
    int cnt{};
    for (int i{}; i < n; ++i) {
        cin >> y[i];
    }
    sort(y, y + n);
    for (int i{}; i < n; ++i) {
        if (5 - y[i] >= k) {
            cnt++;
        }
    }
    cout << cnt / 3 << endl;
    delete[] y;
    return 0;
}
