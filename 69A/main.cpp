// codeforces 69a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *x{new int[n]};
    int *y{new int[n]};
    int *z{new int[n]};
    int x_sum{}, y_sum{}, z_sum{};
    for (int i{}; i < n; ++i) {
        cin >> x[i] >> y[i] >> z[i];
        x_sum += x[i];
        y_sum += y[i];
        z_sum += z[i];
    }
    if (x_sum == 0 and y_sum == 0 and z_sum == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    delete[] x;
    delete[] y;
    delete[] z;
    return 0;
}
