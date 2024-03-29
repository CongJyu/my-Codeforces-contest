// codeforces 1342a

#include <iostream>

using namespace std;

void solution() {
    unsigned long long x{}, y{}, a{}, b{};
    cin >> x >> y;
    cin >> a >> b;
    b = min(b, a * 2);
    if (x < y) {
        unsigned long long tmp{y};
        y = x;
        x = tmp;
    }
    cout << (y * b + (x - y) * a) << endl;
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
