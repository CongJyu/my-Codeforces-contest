// codeforces 427a

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    stack<int> crime;
    int police{};
    for (int i{}; i < n; ++i) {
        int a{};
        cin >> a;
        if (a > 0) {
            police += a;
        } else if (a == -1) {
            if (police > 0) {
                police--;
            } else {
                crime.push(a);
            }
        }
    }
    cout << (int) crime.size() << endl;
    return 0;
}
