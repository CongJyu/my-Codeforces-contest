// codeforces 1712b

#include <iostream>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    for (int i{}; i < n; ++i) {
        if (n % 2 == 0) {
            if ((i + 1) % 2 == 0) {
                cout << i << " ";
            } else {
                cout << i + 2 << " ";
            }
        } else {
            if (i == 0) {
                cout << 1 << " ";
            } else {
                if ((i + 1) % 2 == 0) {
                    cout << i + 2 << " ";
                } else {
                    cout << i << " ";
                }
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
