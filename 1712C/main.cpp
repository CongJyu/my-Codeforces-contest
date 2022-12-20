// codeforces 1712c

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    int *a{new int[n]}, *cp{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
        cp[i] = a[i];
    }
    sort(cp, cp + n - 1);
    if (n == 1) {
        cout << 0 << endl;
    } else {
        int repeat{};
        bool is_increase{true};
        for (int i{1}; i < n; ++i) {
            if (a[i - 1] > a[i]) {
                is_increase = false;
            }
        }
        for (int i{1}; i < n - 1; ++i) {
            if (cp[i - 1] == cp[i]) {
                clog << "REPEAT: " << cp[i] << endl;
                repeat++;
                clog << "REPEAT = " << repeat << endl;
            }
        }
        clog << "INCREASE: " << is_increase << endl;
        if (is_increase) {
            cout << 0 << endl;
        } else {
            cout << n - 1 - repeat << endl;
        }
    }
    delete[] a;
    delete[] cp;
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
