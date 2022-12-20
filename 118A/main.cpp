// codeforces 118a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string word;
    cin >> word;
    for (int i{}; i < (int) word.length(); ++i) {
        if (word[i] >= 'A' and word[i] <= 'Z') {
            word[i] += ('a' - 'A');
        }
    }
    clog << word << endl;
    for (int i{}; i < (int) word.length(); ++i) {
        if (word[i] != 'a' and word[i] != 'e' and word[i] != 'i' and
            word[i] != 'y' and word[i] != 'u' and word[i] != 'o') {
            cout << '.' << word[i];
        }
    }
    cout << endl;
    return 0;
}
