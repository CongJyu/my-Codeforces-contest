// codeforces 1030a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *a{new int[n]};
    bool is_hard{false};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1) {
            is_hard = true;
        }
    }
    if (is_hard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
    delete[] a;
    return 0;
}
