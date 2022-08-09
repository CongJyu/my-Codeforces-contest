// codeforces 99a

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string exp;
    cin >> exp;
    for (int i{}; i < (int) exp.length(); ++i) {
        if (exp[i] == '.') {
            if (exp[i - 1] == '9') {
                cout << "GOTO Vasilisa." << endl;
            } else {
                if (exp[i + 1] >= '5') {
                    for (int j{}; j < i - 1; ++j) {
                        cout << exp[j];
                    }
                    cout << (char) (exp[i - 1] + 1) << endl;
                } else {
                    for (int j{}; j < i; ++j) {
                        cout << exp[j];
                    }
                    cout << endl;
                }
            }
            break;
        }
    }
    return 0;
}
