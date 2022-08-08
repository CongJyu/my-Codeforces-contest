// codeforces 1579a

#include <iostream>
#include <string>

using namespace std;

void solution() {
    string s;
    cin >> s;
    int a{}, b{}, c{};
    for (int i{}; i < (int) s.length(); ++i) {
        switch (s[i]) {
            case 'A':
                a++;
                break;
            case 'B':
                b++;
                break;
            case 'C':
                c++;
                break;
            default:
                break;
        }
    }
    if (a + c == b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
