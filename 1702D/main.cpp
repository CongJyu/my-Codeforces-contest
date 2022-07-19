// codeforces 1702d

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void solution() {
    ios::sync_with_stdio(false);
    string w;
    long long p{};
    cin >> w;
    cin >> p;
    long long sum{};
    for (int i{}; i < (int) w.length(); ++i) {
        sum += w[i] - 'a' + 1;
    }
    string cp_w{w};
    sort(cp_w.rbegin(), cp_w.rend());
    map<char, int> d;
    for (int i{}; i < (int) w.length(); ++i) {
        if (sum > p) {
            d[cp_w[i]]++;
            sum -= cp_w[i] - 'a' + 1;
        }
    }
    for (int i{}; i < (int) w.length(); ++i) {
        if (d[w[i]] > 0) {
            d[w[i]]--;
            continue;
        }
        cout << w[i];
    }
    cout << endl;
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
