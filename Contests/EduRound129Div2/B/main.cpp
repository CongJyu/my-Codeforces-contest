// problem b

#include <iostream>

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
        int m = 0;
        cin >> m;
        int *b = new int[m];
        int sum = 0;
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
            sum = (sum + b[i]) % n;
        }
        cout << a[sum] << endl;
        delete[] a;
        delete[] b;
    }
    return 0;
}
