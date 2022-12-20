// codeforces 96a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string input;
    cin >> input;
    int current{1};
    bool dangerous{false};
    for (int i{1}; i < (int) input.length(); ++i) {
        if (input[i - 1] != input[i]) {
            current = 1;
        } else {
            current++;
            if (current == 7) {
                dangerous = true;
                break;
            }
        }
    }
    if (dangerous) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
