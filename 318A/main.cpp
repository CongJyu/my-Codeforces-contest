// codeforces 318a

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    unsigned long long n{}, k{};
    cin >> n >> k;
    if (n % 2 == 0) {
        if (k > (n / 2)) {
            cout << (k - n / 2) * 2 << endl;
        } else {
            cout << k * 2 - 1 << endl;
        }
    } else {
        if (k > (n / 2 + 1)) {
            cout << (k - (n / 2 + 1)) * 2 << endl;
        } else {
            cout << k * 2 - 1 << endl;
        }
    }
    return 0;
}
