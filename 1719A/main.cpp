// codeforces 1719a

#include <iostream>

using namespace std;

void solution() {
    int n{}, m{};
    cin >> n >> m;
    if ((m + n) % 2 == 0) {
        cout << "Tonya" << endl;
    } else {
        cout << "Burenka" << endl;
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
