// problem b
#include <iostream>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        int n = 0;
        cin >> n;
        int *a = new int [n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        int *cnt = new int [n];
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < n; ++j) {
                if (a[i] == a[j]) {
                    cnt[i]++;
                    cnt[j] = -1;
                }
            }
        }
        int k = 0;
        for (int i = 0; i < n; ++i) {
            if (k < cnt[i]) {
                k = cnt[i];
            }
        }
        int times = 1;
        int result = k;
        int c = 0;
        while (true) {
            if (times * k < n) {
                while (result < n) {
                    result *= 2;
                    c++;
                }
                cout << c + n - k << endl;
                break;
            } else {
                times *= 2;
            }
        }
        delete [] cnt;
        delete [] a;
    }
    return 0;
}
