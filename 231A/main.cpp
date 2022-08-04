// codeforces 231a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int a{}, b{}, c{};
    int cnt{};
    while (n--) {
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
