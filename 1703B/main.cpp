// codeforces 1703b

#include <iostream>
#include <string>

using namespace std;

void solution() {
    int len{};
    cin >> len;
    string ac;
    cin >> ac;
    int q[26]{0};
    for (int i{}; i < len; ++i) {
        q[ac[i] - 'A']++;
    }
    int balloons{};
    for (int i{}; i < 26; ++i) {
        if (q[i] != 0) {
            balloons += q[i] + 1;
        }
    }
    cout << balloons << endl;
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
