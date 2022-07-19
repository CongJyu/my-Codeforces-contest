// codeforces 1702a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        int ori_p{};
        cin >> ori_p;
        int r{1};
        while (r * 10 <= ori_p) {
            r *= 10;
        }
        cout << ori_p - r << endl;
    }
    return 0;
}
