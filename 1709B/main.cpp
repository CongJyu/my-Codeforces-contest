// codeforces 1709b

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    long long *a{new long long[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    vector<long long> left, right;
    left.push_back(a[0]);
    for (int i{}; i < n; ++i) {
        left.push_back(max(0, (int) (a[i] - a[i + 1])));
    }
    right.push_back(a[0]);
    for (int i{1}; i <= n - 1; ++i) {
        right.push_back(max(0, (int) (a[i] - a[i - 1])));
    }
    for (int i{}; i < n - 1; ++i) {
        left[i + 1] += left[i];
        right[i + 1] += right[i];
    }
    while (m--) {
        int s{}, t{};
        cin >> s >> t;
        if (s < t) {
            cout << left[t - 1] - left[s - 1] << endl;
        } else {
            cout << right[s - 1] - right[t - 1] << endl;
        }
    }
    delete[] a;
    return 0;
}
