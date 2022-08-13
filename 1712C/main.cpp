// codeforces 1712c
// wrong answer

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
        for (int i{1}; i < n - 1; ++i) {
            if (cp[i - 1] == cp[i]) {
                clog << "REPEAT: " << cp[i] << endl;
                repeat++;
            }
        }
        cout << n - 1 - repeat << endl;
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
