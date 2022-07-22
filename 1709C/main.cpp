// codeforces 1709c

#include <iostream>
#include <queue>

using namespace std;

void solution() {
    string b;
    cin >> b;
    queue<char> left, right;
    int question{};
    for (int i{}; i < (int) b.length(); ++i) {
        if (b[i] == '(') {
            left.push(b[i]);
        } else if (b[i] == ')') {
            right.push(b[i]);
        } else {
            question++;
        }
    }
    if (left.size() + question == right.size() or
        right.size() + question == left.size() or
        (question == 2 and left.empty() and right.empty())) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
