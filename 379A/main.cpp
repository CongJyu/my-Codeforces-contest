// codeforces 379a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a{}, b{};
    cin >> a >> b;
    int time{a + (a - 1) / (b - 1)};
    cout << time << endl;
    return 0;
}
