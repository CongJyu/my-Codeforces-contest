// codeforces 1650a

#include <iostream>
#include <string>

using namespace std;

void solution() {
    string s;
    cin >> s;
    char tar;
    cin >> tar;
    int front, back;
    int flag;
    bool ok{false};
    for (int i{}; i < (int) s.length(); ++i) {
        if (s[i] == tar) {
            flag = i;
            front = flag;
            back = (int) s.length() - flag + 1;
            clog << "front: " << front << " back: " << back << endl;
            if (front % 2 == 0 and back % 2 == 0) {
                ok = true;
                break;
            }
        }
    }
    if (ok) {
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
