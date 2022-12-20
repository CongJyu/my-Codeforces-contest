// codeforces 1716b

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        a[i] = i + 1;
    }
    cout << n << endl;
    int cnt{1};
    for (int i{}; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    while (cnt < n) {
        for (int i{}; i < n - 1; ++i) {
            int tmp{a[i]};
            a[i] = a[n - 1];
            a[n - 1] = tmp;
            for (int j{}; j < n; ++j) {
                cout << a[j] << " ";
            }
            cout << endl;
            cnt++;
        }
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
