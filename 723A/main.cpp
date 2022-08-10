// codeforces 723a

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x[3]{};
    for (int i{}; i < 3; ++i) {
        cin >> x[i];
    }
    sort(x, x + 3);
    int distance{x[1] - x[0] + x[2] - x[1]};
    cout << distance << endl;
    return 0;
}
