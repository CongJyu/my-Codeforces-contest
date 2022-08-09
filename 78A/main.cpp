// codeforces 78a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string line1, line2, line3;
    getline(cin, line1);
    getline(cin, line2);
    getline(cin, line3);
    int vowel1{}, vowel2{}, vowel3{};
    for (int i{}; i < (int) line1.length(); ++i) {
        if (line1[i] == 'a' or line1[i] == 'e' or line1[i] == 'i' or line1[i] == 'o' or line1[i] == 'u') {
            vowel1++;
        }
    }
    for (int i{}; i < (int) line2.length(); ++i) {
        if (line2[i] == 'a' or line2[i] == 'e' or line2[i] == 'i' or line2[i] == 'o' or line2[i] == 'u') {
            vowel2++;
        }
    }
    for (int i{}; i < (int) line3.length(); ++i) {
        if (line3[i] == 'a' or line3[i] == 'e' or line3[i] == 'i' or line3[i] == 'o' or line3[i] == 'u') {
            vowel3++;
        }
    }
    if (vowel1 == 5 and vowel2 == 7 and vowel3 == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
