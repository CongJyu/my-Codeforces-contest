// codeforces 1716a

#include <iostream>
#include <cmath>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    n = abs(n);
    int step{};
    if (n % 3 == 0) {
        step = n / 3;
    } else if (n % 3 == 1 and n > 3) {
        step = n / 3 + 1;
    } else if (n % 3 == 2 and n > 3) {
        step = n / 3 + 1;
    } else if (n == 2) {
        step = 1;
    } else if (n == 1) {
        step = 2;
    }
    cout << step << endl;
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
