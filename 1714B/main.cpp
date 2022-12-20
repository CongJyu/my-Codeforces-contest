// 1714b

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    vector<int> a;
    for (int i{}; i < n; ++i) {
        int tmp{};
        cin >> tmp;
        a.push_back(tmp);
    }
    bool found{false};
    int cnt{};
    for (int i{cnt}; i < n; ++i) {
        for (int j{cnt}; j < n; ++j) {
            for (int k{cnt}; k < n; ++k) {
                if (a[j] == a[k] and j != k) {
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        if (found) {
            cnt++;
            found = false;
        }
    }
    cout << cnt << endl;
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
