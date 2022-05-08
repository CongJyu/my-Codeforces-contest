// problem b

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        int n = 0, k = 0;
        cin >> n;
        string s;
        cin >> s;
        cin >> k;
        char *spec = new char[k];
        bool *times = new bool[n];
        for (int i = 0; i < k; ++i) {
            cin >> spec[i];
        }
        int tmp = 0, out = 0, out2 = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < k; ++k) {
                if (s[i] == spec[j]) {
                    out = i - tmp;
                    if (out2 < out) {
                        out2 = out;
                    }
                    tmp = i;
                }
            }
        }
        cout << out2 << endl;
        delete[] spec;
        delete[] times;
    }
    return 0;
}
