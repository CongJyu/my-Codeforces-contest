// codeforces 59a

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string word;
    cin >> word;
    int up{}, down{};
    for (int i{}; i < (int) word.length(); ++i) {
        if (word[i] >= 'a' and word[i] <= 'z') {
            down++;
        } else {
            up++;
        }
    }
    if (up <= down) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    } else {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }
    cout << word << endl;
    return 0;
}
