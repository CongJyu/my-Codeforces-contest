// problem b

#include <iostream>
#include <stack>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        int n = 0;
        cin >> n;
        string tmp;
        int *s = new int[n + 1];
        cin >> tmp;
        for (int i = 0; i < n; ++i) {
            s[i] = (int)(unsigned char)tmp[i];
        }
        s[n] = 2;
        int counter = 0;
        int num = 0;
        stack<int> st;
        for (int i = 0; i < n; ++i) {
            st.push(s[i]);
            num++;
            if (s[i] != s[i + 1]) {
                if (num % 2 != 0) {
                    st.pop();
                    counter++;
                    num = 1;
                } else {
                    num = 0;
                }
            }
        }
        cout << counter << endl;
    }
    return 0;
}
