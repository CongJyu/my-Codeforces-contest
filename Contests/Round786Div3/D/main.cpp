// problem d

#include <iostream>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        int n = 0;
        cin >> n;
        int *a = new int[n];
        if (n < 3) {
            cout << "Yes" << endl;
            continue;
        }
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int flag = 0;
        for (int i = n - 1; i >= n - 4; i--) {
            if (
                    a[n - 1] >= a[n - 3] &&
                    a[n - 1] >= a[n - 4] &&
                    a[n - 2] >= a[n - 3] &&
                    a[n - 2] >= a[n - 4]
                    ) {
                continue;
            } else {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
