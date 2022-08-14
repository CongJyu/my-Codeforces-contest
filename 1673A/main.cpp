// codeforces 1673a

#include <iostream>
#include <string>

using namespace std;

void solution() {
    string s;
    cin >> s;
    int n{(int) s.length()}, alice{};
    for (int i{}; i < n; ++i) {
        alice += s[i] - 'a' + 1;
    }
    if (n % 2 == 0) {
        cout << "Alice " << alice << endl;
    } else {
        int bob;
        if (s[0] <= s[n - 1]) {
            bob = s[0] - 'a' + 1;
        } else {
            bob = s[n - 1] - 'a' + 1;
        }
        alice -= bob;
        if (alice > bob) {
            cout << "Alice " << alice - bob << endl;
        } else if (alice < bob) {
            cout << "Bob " << bob - alice << endl;
        } else {
            cout << "Draw " << 0 << endl;
        }
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
