//  Problem b

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        int n = 0;
        cin >> n;
        int* a = new int [n];
        int judge = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (n == 1 && a[0] > 1) {
            judge = 2;
        }
        for (int i = 0; i < n - 1; ++i) {
            if (abs(a[i + 1] - a[i]) > 1) {
                judge++;
            }
        }
        delete [] a;
        if (judge > 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
