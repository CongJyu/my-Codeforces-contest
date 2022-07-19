// codeforces 1702b

#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        string word;
        cin >> word;
        set<char> s;
        int day{};
        for (int i{}; i < (int) word.length(); ++i) {
            s.insert(word[i]);
            if (s.size() > 3) {
                day++;
                s.clear();
                s.insert(word[i]);
            }
        }
        if (!s.empty()) {
            day++;
        }
        cout << day << endl;
    }
    return 0;
}
