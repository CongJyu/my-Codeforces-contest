// codeforces 1770a

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solution() {
    int n{}, m{};
    cin >> n >> m;
    vector<long long> a;
    for (int i{}; i < n + m; ++i) {
        int temp{};
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end() - 1);
    reverse(a.begin(), a.end());
    long long result{};
    for (int i{}; i < n; ++i) {
        result += a.at(i);
    }
    cout << result << endl;
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
