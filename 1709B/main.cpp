// codeforces 1709b

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n{}, m{};
    scanf("%d %d", &n, &m);
    long long *a{new long long[n]};
    for (int i{}; i < n; ++i) {
        scanf("%lld", &a[i]);
    }
    while (m--) {
        long long s{}, t{};
        scanf("%lld %lld", &s, &t);
        long long fall{};
        if (s > t) {
            for (long long j{s - 1}; j > t - 1; --j) {
                if (a[j] > a[j - 1]) {
                    fall += a[j] - a[j - 1];
                }
            }
        } else {
            for (long long j{s}; j <= t - 1; ++j) {
                if (a[j] < a[j - 1]) {
                    fall += a[j - 1] - a[j];
                }
            }
        }
        printf("%lld\n", fall);
    }
    delete[] a;
    return 0;
}
