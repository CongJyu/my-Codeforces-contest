// codeforces 1728b

#include <iostream>

using namespace std;

void solution() {
    int n{};
    cin >> n;
    for (int i{n - 1}; i >= 0; --i) {
        cout << i + 1 << " ";
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
