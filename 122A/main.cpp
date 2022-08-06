// codeforces 122a

#include <iostream>
#include <string>

using namespace std;

int d[14] = {
        4, 7, 44, 47, 74, 77, 444, 447, 474, 477,
        744, 747, 774, 777
};

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    bool almost_lucky{false};
    for (int i: d) {
        if (n % i == 0) {
            almost_lucky = true;
            break;
        } else if (i > n) {
            break;
        }
    }
    if (almost_lucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
