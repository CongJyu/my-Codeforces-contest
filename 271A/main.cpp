// codeforces 271a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int c[10]{0};
    while (true) {
        n++;
        string check{to_string(n)};
        for (int i{}; i < (int) check.length(); ++i) {
            c[check[i] - '0']++;
        }
        bool ok{true};
        for (int i{}; i < 10; ++i) {
            if (c[i] >= 2) {
                ok = false;
                break;
            }
        }
        if (ok) {
            break;
        } else {
            for (int i{}; i < 10; ++i) {
                c[i] = 0;
            }
        }
    }
    cout << n << endl;
    return 0;
}
