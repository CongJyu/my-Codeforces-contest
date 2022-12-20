// codeforces 996a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long n{};
    cin >> n;
    int bill{};
    while (n > 0) {
        if (n - 100 >= 0) {
            n -= 100;
        } else if (n - 20 >= 0) {
            n -= 20;
        } else if (n - 10 >= 0) {
            n -= 10;
        } else if (n - 5 >= 0) {
            n -= 5;
        } else if (n - 1 >= 0) {
            n -= 1;
        }
        bill++;
    }
    cout << bill << endl;
    return 0;
}
