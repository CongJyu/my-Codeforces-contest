// codeforces 282a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int x{};
    while (n--) {
        string opt;
        cin >> opt;
        if (opt.find("++") != string::npos and opt.find("--") == string::npos) {
            x++;
        } else if (opt.find("++") == string::npos and opt.find("--") != string::npos) {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
