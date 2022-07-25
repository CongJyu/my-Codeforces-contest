// codeforces 1711e

#include <iostream>
#include <string>

using namespace std;

unsigned long long fac(unsigned long long times) {
    unsigned long long result{1};
    for (unsigned long long i{}; i < times; ++i) {
        result *= 2;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    string bin;
    cin >> bin;
    unsigned long long range{};
    for (unsigned long long i{}; i < (unsigned long long) bin.length(); ++i) {
        range += (unsigned long long) ((bin[i] - '0') * fac(bin.length() - i - 1));
    }
    // clog << range << endl;
    unsigned long long x, y, z;
    unsigned long long cnt{};
    for (unsigned long long i{}; i <= range; ++i) {
        for (unsigned long long j{}; j <= range; ++j) {
            for (unsigned long long k{}; k <= range; ++k) {
                x = i ^ j;
                y = i ^ k;
                z = j ^ k;
                if (x + y > z and x + z > y and y + z > x) {
                    cnt++;
                }
                cnt %= 998244353;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
