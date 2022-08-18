// codeforces 1720d1

#include <iostream>

using namespace std;

void solution() {
    long long n{};
    cin >> n;
    long long *a{new long long[n]};
    for (long long i{}; i < n; ++i) {
        cin >> a[i];
    }
    long long beautiful_m{};
    for (long long i{}; i < n - 1; ++i) {
        for (long long j{i + 1}; j < n; ++j) {
            long long m{j - i + 1};
            long long *b{new long long[m]}, *ok{new long long[m]};
            for (long long k{}; k < m; ++k) {
                b[k] = a[i + k];
                ok[k] = 0;
            }
            for (long long p{}; p < m - 1; ++p) {
                if ((a[b[p]] xor b[p + 1]) < (a[b[p + 1]] xor b[p])) {
                    ok[p] = 1;
                }
            }
            bool yes{true};
            for (long long k{}; k < m - 1; ++k) {
                if (ok[k] != 1) {
                    yes = false;
                    // clog << "YES = FALSE" << endl;
                    break;
                }
            }
            if (yes) {
                if (beautiful_m < m) {
                    beautiful_m = m;
                }
            }
            delete[] b;
            delete[] ok;
        }
    }
    cout << beautiful_m << endl;
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
