// codeforces 791a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a{}, b{};
    cin >> a >> b;
    int year{};
    while (a <= b) {
        a *= 3;
        b *= 2;
        year++;
    }
    cout << year << endl;
    return 0;
}
