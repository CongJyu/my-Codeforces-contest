// codeforces 1703c

#include <iostream>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    for (int i{}; i < n; ++i) {
        int num{};
        cin >> num;
        string opt;
        cin >> opt;
        for (int j{}; j < (int) opt.length(); ++j) {
            if (opt[j] == 'U') {
                a[i]--;
                if (a[i] < 0) {
                    a[i] += 10;
                }
            } else {
                a[i]++;
                if (a[i] > 9) {
                    a[i] -= 10;
                }
            }
        }
    }
    for (int i{}; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
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
