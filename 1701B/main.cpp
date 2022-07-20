// codeforces 1701b

#include <iostream>

using namespace std;

void solution() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    cout << 2 << endl;
    for (int i{1}; i <= n; ++i) {
        if (i % 2 != 0) {
            for (int j{i}; j <= n; j *= 2) {
                cout << j << " ";
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
