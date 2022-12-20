// codeforces 1367a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    while (n--) {
        string b;
        cin >> b;
        clog << b << endl;
        for (int i{}; i < (int) b.length(); ++i) {
            if (i % 2 == 0) {
                cout << b[i];
            }
        }
        cout << b[(int) b.length() - 1] << endl;
    }
    return 0;
}
