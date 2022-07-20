// codeforces 1660a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int g{};
    cin >> g;
    while (g--) {
        int a{}, b{};
        cin >> a >> b;
        int s{a * 1 + b * 2 + 1};
        if (a == 0) {
            s = 1;
        }
        cout << s << endl;
    }
    return 0;
}
