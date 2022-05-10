// problem c

#include<iostream>
#include<string>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int fir = 0, sec = 0, min = 0;
    int sum;
    for (int i = 0; i < n; i++) {
        cin >> fir >> sec;
        if (fir == 1) {
            cout << 0 << endl;
            continue;
        }
        auto *a = new string[fir];
        for (int j = 0; j < fir; j++) {
            cin >> a[j];
        }
        for (int j = 0; j < fir; j++) {
            for (int k = j + 1; k < fir; k++) {
                sum = 0;
                for (int m = 0; m < sec; m++) {
                    if ((a[k][m] - a[j][m]) < 0) {
                        sum = sum + a[j][m] - a[k][m];
                    } else {
                        sum = sum + a[k][m] - a[j][m];
                    }
                }
                if (j == 0 && k == 1) {
                    min = sum;
                }
                if (min > sum) {
                    min = sum;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}
