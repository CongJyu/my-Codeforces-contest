// codeforces 469a

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    vector<int> co;
    int p{}, q{};
    cin >> p;
    for (int i{}; i < p; ++i) {
        int tmp{};
        cin >> tmp;
        co.push_back(tmp);
    }
    cin >> q;
    for (int i{}; i < q; ++i) {
        int tmp{};
        cin >> tmp;
        co.push_back(tmp);
    }
    sort(co.begin(), co.end(), cmp);
    int *yes{new int[n]};
    for (int i{}; i < n; ++i) {
        yes[i] = 0;
    }
    for (int i{n}; i > 0; --i) {
        for (int j{}; j < (int) co.size(); ++j) {
            if (co.at(j) == i) {
                yes[i - 1] = 1;
                break;
            }
        }
    }
    bool ok{true};
    for (int i{}; i < n; ++i) {
        if (yes[i] == 0) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}
