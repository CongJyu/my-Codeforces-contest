// codeforces 1335a

#include <iostream>

using namespace std;

void solution() {
    unsigned long long n{};
    cin >> n;
    unsigned long long cnt{n / 2};
    if (n % 2 == 0) {
        cnt--;
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
