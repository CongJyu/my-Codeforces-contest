// codeforces 731a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string name;
    cin >> name;
    int cnt{};
    char current{'a'};
    for (int i{}; i < (int) name.length(); ++i) {
        if (name[i] > current) {
            int right{name[i] - current}, left{26 - name[i] + current};
            clog << "name > current: left " << left << " right " << right << endl;
            cnt += min(left, right);
            current = name[i];
        } else if (name[i] < current) {
            int right{'z' - current + name[i] - 'a' + 1}, left{26 - ('z' - current + name[i] - 'a' + 1)};
            clog << "name < current: left " << left << " right " << right << endl;
            cnt += min(left, right);
            current = name[i];
        }
    }
    cout << cnt << endl;
    return 0;
}
