// codeforces 1675a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        int a{}, b{}, c{}, x{}, y{};
        cin >> a >> b >> c >> x >> y;
        if ((a >= x && b >= y) or
            (a < x && b >= y && c >= x - a) or
            (b < y && a >= x && c >= y - b) or
            (b < y && a < x && c >= x + y - a - b)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
