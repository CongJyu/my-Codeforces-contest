// codeforces 230a

#include <iostream>
#include <algorithm>

using namespace std;

struct Dragon {
    int x{};
    int y{};
};

bool cmp(Dragon a, Dragon b) {
    if (a.x != b.x) {
        return a.x < b.x;
    } else {
        return a.y > b.y;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int s{}, n{};
    cin >> s >> n;
    Dragon *d{new Dragon[n]};
    for (int i{}; i < n; ++i) {
        cin >> d[i].x >> d[i].y;
    }
    sort(d, d + n, cmp);
    int cnt{};
    for (int i{}; i < n; ++i) {
        if (s > d[i].x) {
            cnt++;
            s += d[i].y;
        } else {
            break;
        }
    }
    if (cnt == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
