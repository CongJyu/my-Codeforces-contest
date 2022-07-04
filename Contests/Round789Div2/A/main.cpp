// problem a

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        int n = 0;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        // contains "0"
        int zero_cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] == 0) {
                zero_cnt++;
            }
        }
        if (zero_cnt != 0) {
            cout << n - zero_cnt << endl;
            continue;
        }
        // contains same elements
        sort(a, a + n);
        int flag = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] == a[i + 1]) {
                flag = 1;
            }
        }
        if (flag == 1) {
            cout << n << endl;
            continue;
        }
        // does not contain "0"
        int delta = a[1] - a[0];
        cout << n - delta + a[0] + 1 << endl;
    }
    return 0;
}
