// cf 1a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long n = 0, m = 0, a = 0;
    cin >> n >> m >> a;
    if (n % a == 0) {
        n /= a;
    } else {
        n = n / a + 1;
    }
    if (m % a == 0) {
        m /= a;
    } else {
        m = m / a + 1;
    }
    long long result = n * m;
    cout << result << endl;
    return 0;
}
