// codeforces 1728b

#include <iostream>
#include <vector>

using namespace std;

void solution() {
    int n{};
    cin >> n;
//    if (n % 2 != 0) {
//        for (int i{}; i < n; ++i) {
//            cout << i + 1 << " ";
//        }
//        cout << endl;
//    } else {
//        for (int i{n - 2}; i > 1; --i) {
//            cout << i << " ";
//        }
//        cout << 1 << " " << n - 1 << " " << n << endl;
//    }
    for (int i{1}; i <= n; ++i) {
        cout << i << " ";
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
