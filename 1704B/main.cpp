// 1704b
// no idea

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    long long n{}, x{};
    cin >> n >> x;
    long long *food{new long long[n]};
    for (int i{}; i < n; ++i) {
        cin >> food[i];
    }
    long long change{};
    sort(food, food + n);
    // test
    for (int test{}; test < n; ++test) {
        clog << food[test] << " ";
    }
    clog << endl;
    // test
    int i{}, flag{};
    while (food[i] + 2 * x < food[n - 1]) {
        for (int j{i + 1}; j < n; ++j) {
            if (food[j] > food[i] + 2 * x) {
                flag = j;
                change++;
                break;
            }
        }
        i = flag;
    }
    cout << change << endl;
    delete[] food;
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
