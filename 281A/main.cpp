// codeforces 281a

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string word;
    cin >> word;
    transform(word.begin(), word.begin() + 1, word.begin(), ::toupper);
    cout << word << endl;
    return 0;
}
