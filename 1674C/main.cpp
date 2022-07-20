// codeforces 1674c

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        int ya{};
        for (int i{}; i < (int) y.size(); ++i) {
            if (y[i] == 'a') {
                ya++;
            }
        }
        if (y.size() == 1 && y[0] == 'a') {
            cout << 1 << endl;
        } else {
            if (ya > 0 && y.size() > 1) {
                cout << -1 << endl;
            } else {
                if (y.size() == 1 && x.size() == 1 && x != y) {
                    cout << 2 << endl;
                } else {
                    unsigned long long m{(unsigned long long) pow(2, x.size())};
                    cout << m << endl;
                }
            }
        }
    }
    return 0;
}
