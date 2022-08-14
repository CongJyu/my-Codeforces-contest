// codeforces 977a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long n{}, k{};
    cin >> n >> k;
    for (int i{}; i < k; ++i) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n--;
        }
    }
    cout << n << endl;
    return 0;
}
