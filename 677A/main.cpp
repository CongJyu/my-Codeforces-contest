// codeforces 677a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, h{};
    cin >> n >> h;
    int *f{new int[n]};
    int width{};
    for (int i{}; i < n; ++i) {
        cin >> f[i];
        if (f[i] > h) {
            width += 2;
        } else {
            width++;
        }
    }
    delete[] f;
    cout << width << endl;
    return 0;
}
