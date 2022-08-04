// 1714a

#include <iostream>
#include <algorithm>

using namespace std;

struct Clock {
    int h{};
    int m{};
};

bool cmp(Clock a, Clock b) {
    if (a.h == b.h) {
        return a.m < b.m;
    } else {
        return a.h < b.h;
    }
}

void solution() {
    int n{}, hh{}, mm{};
    cin >> n >> hh >> mm;
    Clock *c{new Clock[n]};
    for (int i{}; i < n; ++i) {
        cin >> c[i].h >> c[i].m;
    }
    sort(c, c + n, cmp);
    bool found{false};
    for (int i{}; i < n; ++i) {
        if (c[i].h == hh and c[i].m == mm) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << 0 << " " << 0 << endl;
    } else {
        int flag{};
        for (int i{}; i < n; ++i) {
            if (c[i].h >= hh and c[i].m >= mm) {
                flag = i;
                break;
            }
        }
        int sleep_h{c[flag].h - hh}, sleep_m{c[flag].m - mm};
        if (sleep_m < 0) {
            sleep_m += 60;
            sleep_h--;
        }
        if (sleep_m >= 60) {
            sleep_m -= 60;
            sleep_h++;
        }
        if (sleep_h < 0) {
            sleep_h += 24;
        }
        if (sleep_h >= 24) {
            sleep_h -= 24;
        }
        cout << sleep_h << " " << sleep_m << endl;
    }
    delete[] c;
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
