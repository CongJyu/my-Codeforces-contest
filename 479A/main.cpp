// codeforces 479a

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a{}, b{}, c{};
    cin >> a >> b >> c;
    int result[6]{
            a + b + c,
            a + b * c,
            a * (b + c),
            a * b * c,
            (a + b) * c,
            a * b + c
    };
    sort(result, result + 6);
    cout << result[5] << endl;
    return 0;
}
