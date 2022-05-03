// problem a

#include <iostream>

using namespace std;

int main() {
    int x = 0, y = 0, a = 0, b = 0;
    int t = 0;
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
