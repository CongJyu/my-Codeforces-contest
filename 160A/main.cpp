// codeforces 160a

#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
    return x > y;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *a{new int[n]};
    int sum{};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n, cmp);
    int take_num{}, self_take{};
    for (int i{}; i < n; ++i) {
        self_take += a[i];
        take_num++;
        if (self_take > sum - self_take) {
            break;
        }
    }
    cout << take_num << endl;
    delete[] a;
    return 0;
}
