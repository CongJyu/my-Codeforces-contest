// codeforces 1154a

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a[4];
    for (int i{}; i < 4; ++i) {
        cin >> a[i];
    }
    sort(a, a + 4);
    cout << a[3] - a[2] << " " << a[3] - a[1] << " " << a[3] - a[0] << endl;
    return 0;
}
