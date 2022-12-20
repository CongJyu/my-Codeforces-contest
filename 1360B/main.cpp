// codeforces 1360b

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int result{a[n - 1] - a[0]};
    for (int i{}; i < n; ++i) {
        for (int j{i + 1}; j < n; ++j) {
            result = min(result, a[j] - a[i]);
        }
    }
    cout << result << endl;
    delete[] a;
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
