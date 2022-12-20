// codeforces 1472b

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    int a{};
    int one{}, two{};
    for (int i{}; i < n; ++i) {
        cin >> a;
        if (a == 1) {
            one++;
        } else {
            two++;
        }
    }
    if (one % 2 != 0) {
        cout << "NO" << endl;
    } else {
        if (two % 2 == 0) {
            cout << "YES" << endl;
        } else {
            if (one >= 2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
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
