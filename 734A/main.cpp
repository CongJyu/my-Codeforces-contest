// codeforces 734a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    string g;
    cin >> g;
    int anton{}, danik{};
    for (int i{}; i < n; ++i) {
        if (g[i] == 'A') {
            anton++;
        } else {
            danik++;
        }
    }
    if (anton > danik) {
        cout << "Anton" << endl;
    } else if (anton < danik) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
    return 0;
}
