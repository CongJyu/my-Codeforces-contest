// codeforces 50a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m{}, n{};
    cin >> m >> n;
    int tmp{n / 2};
    int result{tmp * m};
    if (n & 1) {
        result += (m / 2);
    }
    cout << result << endl;
    return 0;
}
