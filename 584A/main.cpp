// codeforces 584a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, t{};
    cin >> n >> t;
    string output;
    if (t == 10) {
        output += "1";
        for (int i{}; i < n - 1; ++i) {
            output += "0";
        }
    } else {
        for (int i{}; i < n; ++i) {
            output += (char) (t + '0');
        }
    }
    if (n == 1 and t == 10) {
        output = "-1";
    }
    cout << output << endl;
    return 0;
}
