// codeforces 1712e1
// Time Limit Exceeded

#include <iostream>
#include <algorithm>

using namespace std;

unsigned long long lcm(unsigned long long x, unsigned long long y, unsigned long long z) {
    unsigned long long a[3]{x, y, z};
    sort(a, a + 3);
    unsigned long long largest{a[2]};
    while (true) {
        if (largest % a[0] == 0 and largest % a[1] == 0) {
            break;
        }
        largest += a[2];
    }
    clog << x << " " << y << " " << z << " LCM: " << largest << endl;
    return largest;
}

void solution() {
    unsigned long long l{}, r{};
    cin >> l >> r;
    int cnt{};
    for (unsigned long long i{l}; i <= r - 2; ++i) {
        for (unsigned long long j{i + 1}; j <= r - 1; ++j) {
            for (unsigned long long k{j + 1}; k <= r; ++k) {
                if (lcm(i, j, k) >= i + j + k) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
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
