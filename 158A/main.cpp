// codeforces 158a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, k{};
    cin >> n >> k;
    int *a{new int[n]}, cnt{};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    for (int i{}; i < n; ++i) {
        if (a[i] >= a[k - 1] and a[i] > 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    delete[] a;
    return 0;
}
