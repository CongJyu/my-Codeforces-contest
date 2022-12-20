// codeforces 1705b

#include <iostream>
#include <vector>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    vector<int> a(n);
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    long long result{};
    int cnt{};
    while (cnt < n and a[cnt] == 0) {
        cnt++;
    }
    for (int i{cnt}; i < n - 1; ++i) {
        result += a[i];
        if (a[i] == 0) {
            result++;
        }
    }
    cout << result << endl;
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
