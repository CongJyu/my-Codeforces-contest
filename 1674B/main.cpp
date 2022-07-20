// codeforces 1674b

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    while (n--) {
        char first, last;
        cin >> first >> last;
        if (first == 'a') {
            cout << (int) last - (int) first << endl;
        } else {
            if (first > last) {
                cout << ((int) first - (int) 'a') * 25 + ((int) last - (int) 'a') + 1 << endl;
            } else {
                cout << ((int) first - (int) 'a') * 25 + ((int) last - (int) 'a') << endl;
            }
        }
    }
    return 0;
}
