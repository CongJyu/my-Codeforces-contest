// codeforces 1746b

#include <iostream>

using namespace std;

void solution() {
    int n = 0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int step = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i - 1] > a[i]) {
            step++;
        }
    }
    cout << step << endl;
    delete[] a;
}

int main() {
    ios::sync_with_stdio(false);
    int t = 0;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
