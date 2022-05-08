// problem a

#include <iostream>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while(t--) {
        int a = 0, b = 0, c = 0, x = 0, y = 0;
        cin >> a >> b >> c >> x >> y;
        if (a >= x && b >= y) {
            cout << "Yes" << endl;
        } else if (a < x && b >= y && c >= x - a) {
            cout << "Yes" << endl;
        } else if (b < y && a >= x && c >= y - b) {
            cout << "Yes" << endl;
        } else if (b < y && a < x && c >= x + y - a - b) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
