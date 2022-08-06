// codeforces 158b

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *f{new int[n]};
    int one{}, two{}, three{}, four{};
    for (int i{}; i < n; ++i) {
        cin >> f[i];
        if (f[i] == 1) {
            one++;
        } else if (f[i] == 2) {
            two++;
        } else if (f[i] == 3) {
            three++;
        } else if (f[i] == 4) {
            four++;
        }
    }
    delete[] f;
    int taxi{four + three + two / 2};
    if (one > three and two % 2 != 0) {
        if (one >= three + 2) {
            one -= (three + 2);
            taxi++;
            if (one % 4 != 0) {
                taxi += (one / 4);
                taxi++;
            } else {
                taxi += (one / 4);
            }
        } else {
            one -= three;
            taxi++;
            if (one % 4 != 0) {
                taxi += (one / 4);
                taxi++;
            } else {
                taxi += (one / 4);
            }
        }
    } else {
        if (two % 2 != 0) {
            taxi++;
        }
    }
    cout << taxi << endl;
    return 0;
}
