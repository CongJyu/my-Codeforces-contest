// codeforces 1719c

#include <iostream>

using namespace std;

void solution() {
    int n{}, q{};
    cin >> n >> q;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    for (int i{}; i < q; ++i) {
        long long id{}, k{};
        cin >> id >> k;
        long long round{};
        for (long long j{id - 1}; j < k + 1; ++j) {
            if (a[id - 1] > a[j]) {
                round++;
            }
        }
        cout << round << endl;
    }
    delete[] a;
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
