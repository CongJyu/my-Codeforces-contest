// codeforces 1703a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        string y;
        cin >> y;
        for (int i{}; i < 3; ++i) {
            if (y[i] >= 'A' and y[i] <= 'Z') {
                y[i] -= 'A' - 'a';
            }
        }
        if (y == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
