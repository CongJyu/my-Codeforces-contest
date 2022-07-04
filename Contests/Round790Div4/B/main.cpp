// problem b

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
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += (a[i] - a[0]);
        }
        cout << sum << endl;
    }
    return 0;
}
