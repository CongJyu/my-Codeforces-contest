// codeforces 236a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string name;
    cin >> name;
    int c[26]{};
    for (int i{}; i < (int) name.length(); ++i) {
        c[name[i] - 'a']++;
    }
    int cnt{};
    for (int i{}; i < 26; ++i) {
        if (c[i] != 0) {
            cnt++;
        }
    }
    if (cnt % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
