// codeforces 1712b
// wrong answer

#include <iostream>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    for (int i{}; i < n; ++i) {
        if (n % 2 == 0) {
            cout << n - i << " ";
        } else {
            if (i == 0) {
                cout << 1 << " ";
            } else {
                cout << n - i + 1 << " ";
            }
        }
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
