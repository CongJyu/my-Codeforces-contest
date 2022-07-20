// codeforces 1674a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x{}, y{}, a, b;
    int t{};
    cin >> t;
    while (t--) {
        cin >> x >> y;
        if (y % x == 0) {
            b = y / x;
            a = 1;
        } else {
            a = 0;
            b = 0;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}
