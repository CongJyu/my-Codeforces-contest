// codeforces 1728a

#include <iostream>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    int *cnt{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> cnt[i];
    }
    int flag{}, largest{};
    for (int i{}; i < n; ++i) {
        if (cnt[i] > largest) {
            flag = i + 1;
            largest = cnt[i];
        }
    }
    cout << flag << endl;
    delete[] cnt;
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
