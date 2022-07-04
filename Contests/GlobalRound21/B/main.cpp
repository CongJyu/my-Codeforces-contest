// problem b
// wrong answer

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
        sort(a, a + n);
        int flag = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] > 0) {
                flag = a[i];
                break;
            }
        }
        cout << flag << endl;
    }
    return 0;
}
