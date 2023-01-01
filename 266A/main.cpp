// codeforces 266a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    string stone{};
    cin >> stone;
    int count{}, temp{};
    for (int i{1}; i < stone.length(); ++i) {
        if (stone[i] == stone[i - 1]) {
            temp++;
        } else {
            count += temp;
            temp = 0;
        }
    }
    count += temp;
    cout << count << endl;
    return 0;
}
