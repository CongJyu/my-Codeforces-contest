// 1714c

#include <iostream>
#include <stack>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    int total{}, i{9};
    stack<int> num;
    while (total < n) {
        while (i > n) {
            i--;
        }
        total += i;
        num.push(i);
        if (n - total < 9 and n - total < i) {
            break;
        }
        i--;
    }
    if (n - total != 0) {
        num.push(n - total);
    }
    while (!num.empty()) {
        cout << num.top();
        num.pop();
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
