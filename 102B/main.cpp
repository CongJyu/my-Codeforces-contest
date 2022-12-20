// codeforces 102b

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string n;
    cin >> n;
    long long sum{}, cnt{};
    bool go{true};
    while (go) {
        for (int i{}; i < (int) n.length(); ++i) {
            sum += (n[i] - '0');
        }
        if (n.length() == 1) {
            break;
        }
        cnt++;
        if (sum < 10) {
            go = false;
        } else {
            n = to_string(sum);
            sum = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}
