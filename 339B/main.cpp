// codeforces 339b

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long n{}, m{};
    cin >> n >> m;
    long long *a{new long long[m + 1]};
    a[0] = 1;
    for (int i{1}; i < m + 1; ++i) {
        cin >> a[i];
    }
    long long time{};
    for (int i{1}; i < m + 1; ++i) {
        if (a[i] - a[i - 1] >= 0) {
            time += (a[i] - a[i - 1]);
            clog << "time is: " << time << endl;
        } else {
            time += (n - a[i - 1] + a[i]);
            clog << "time is: " << time << endl;
        }
    }
    delete[] a;
    cout << time << endl;
    return 0;
}
