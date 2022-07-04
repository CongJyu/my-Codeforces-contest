// problem b

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    int n = 0;
    char first, last;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> first >> last;
        if (first == 'a') { cout << (int) last - (int) first << endl; }
        else {
            if (first > last)
                cout << ((int) first - (int) 'a') * 25 + ((int) last - (int) 'a') + 1 << endl;
            else {
                cout << ((int) first - (int) 'a') * 25 + ((int) last - (int) 'a') << endl;
            }
        }
    }

    return 0;
}