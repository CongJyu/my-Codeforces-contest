// codeforces 41a

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string eng, ber;
    cin >> eng >> ber;
    reverse(ber.begin(), ber.end());
    if (eng == ber) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
