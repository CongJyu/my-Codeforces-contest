//  Problem c

#include <iostream>
#include <string>
using namespace std;
int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        string input;
        cin >> input;
        int count = 0;
        for (int i = 2; i <= input.size() + 1; i += 2) {
            if (input[i - 1] == input[i - 2]) {
                count++;
            } else {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
