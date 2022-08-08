// codeforces 339a

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    vector<char> num;
    for (int i{}; i < (int) s.length(); ++i) {
        if (s[i] >= '0' and s[i] <= '9') {
            num.push_back(s[i]);
        }
    }
    sort(num.begin(), num.end());
    cout << num.at(0);
    for (int i{1}; i < (int) num.size(); ++i) {
        cout << "+" << num.at(i);
    }
    cout << endl;
    return 0;
}
