// codeforces 4a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int w{};
    cin >> w;
    if (w % 2 != 0) {
        cout << "NO" << endl;
    } else {
        if (w > 2) {
            if (((w - 2) % 2 == 0)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
