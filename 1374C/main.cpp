// codeforces 1374c

#include <iostream>
#include <stack>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    string s;
    cin >> s;
    int cnt{};
    stack<char> b;
    for (int i{}; i < n; ++i) {
        if (s[i] == '(') {
            b.push('(');
        } else if (s[i] == ')') {
            if (b.empty() or b.top() != '(') {
                cnt++;
            } else if (b.top() == '(') {
                b.pop();
            }
        }
    }
    cout << cnt << endl;
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
