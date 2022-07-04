//  Problem a

#include <iostream>
using namespace std;
int main() {
    int g = 0;
    cin >> g;
    while (g--) {
        int a = 0, b = 0;
        cin >> a >> b;
        int s = a * 1 + b * 2 + 1;
        if (a == 0) {
            s = 1;
        }
        cout << s << endl;
    }
    return 0;
}
