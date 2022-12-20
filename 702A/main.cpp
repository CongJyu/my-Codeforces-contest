// codeforces 702a
// no idea

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    unsigned long long *a{new unsigned long long[n]};
    int cnt{1}, max_cnt{1};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    for (int i{1}; i < n; ++i) {
        if (a[i] > a[i - 1]) {
            cnt++;
        } else {
            if (cnt > max_cnt) {
                max_cnt = cnt;
                cnt = 1;
            }
        }
    }
    if (cnt > max_cnt) {
        max_cnt = cnt;
    }
    delete[] a;
    cout << max_cnt << endl;
    return 0;
}
