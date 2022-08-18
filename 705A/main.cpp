// codeforces 705a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    for (int i{}; i < n; ++i) {
        if (i % 2 == 0) {
            cout << "I hate ";
        } else {
            cout << "I love ";
        }
        if (i != n - 1) {
            cout << "that ";
        }
    }
    cout << "it" << endl;
    return 0;
}
