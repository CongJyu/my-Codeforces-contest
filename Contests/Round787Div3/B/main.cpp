// problem b

#include <iostream>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        long long n = 0;
        cin >> n;
        long long cnt = 0;
        auto *a = new long long[n];
        for (long long i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        if (a[n - 1] < n - 1) {
            cout << -1 << endl;
            continue;
        }
        for (long long i = n - 2; i >= 0; i--) {
            while (a[i] >= a[i + 1]) {
                a[i] /= 2;
                cnt++;
            }
        }
        delete[] a;
        cout << cnt << endl;
    }
    return 0;
}
