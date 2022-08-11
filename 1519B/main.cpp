// codeforces 1519b

#include <iostream>

using namespace std;

void solution() {
    int n{}, m{}, k{};
    cin >> n >> m >> k;
    if (n * m - 1 == k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
