// 1709a

#include <iostream>

using namespace std;

void solution() {
    int x{};
    cin >> x;
    int door[3];
    for (int i{}; i < 3; ++i) {
        cin >> door[i];
    }
    if (door[x - 1] != 0 and door[door[x - 1] - 1] != 0) {
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
