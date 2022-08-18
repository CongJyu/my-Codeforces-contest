// codeforces 1720a

#include <iostream>

using namespace std;

void solution() {
    long long a{}, b{}, c{}, d{};
    cin >> a >> b >> c >> d;
    if (a * d == b * c) {
        cout << 0 << endl;
    } else {
        if (a == 0 or c == 0) {
            cout << 1 << endl;
        } else {
            if ((a * d) % (b * c) == 0 or (b * c) % (a * d) == 0) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
