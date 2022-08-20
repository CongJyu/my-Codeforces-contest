// codeforces 1715a

#include <iostream>

using namespace std;

void solution() {
    long long n{}, m{};
    cin >> n >> m;
    if (n < m) {
        long long tmp{m};
        m = n;
        n = tmp;
    }
    long long result{(n - 2) + m * 2};
    if (n == 1 and m == 1) {
        result = 0;
    }
    cout << result << endl;
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
