// codeforces 1711a

#include <iostream>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    int *a{new int[n]};
    if (n % 2 == 0) {
        for (int i{}; i < n; ++i) {
            if (i % 2 == 0) {
                a[i] = i + 2;
            } else {
                a[i] = i;
            }
        }
    } else {
        a[n - 1] = 1;
        for (int i{}; i < n - 1; ++i) {
            a[i] = i + 2;
        }
    }
    for (int i{}; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
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
