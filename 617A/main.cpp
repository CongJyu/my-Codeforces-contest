// codeforces 617a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long n{};
    cin >> n;
    if (n % 5 == 0) {
        cout << n / 5 << endl;
    } else {
        cout << n / 5 + 1 << endl;
    }
    return 0;
}
