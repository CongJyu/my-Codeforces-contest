// problem a

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        char a[6];
        for (char & i : a) {
            cin >> i;
        }
        if ((int)a[0] + (int)a[1] + (int)a[2] == (int)a[3] + (int)a[4] + (int)a[5]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
