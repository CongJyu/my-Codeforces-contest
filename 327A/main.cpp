// codeforces 327a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *a{new int[n]}, *copied_a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
        copied_a[i] = a[i];
    }
    int num_of_one{}, current{};
    for (int i{}; i < n; ++i) {
        for (int j{i}; j < n; ++j) {
            for (int k{i}; k <= j; ++k) {
                copied_a[k] = 1 - copied_a[k];
            }
            for (int k{}; k < n; ++k) {
                if (copied_a[k] == 1) {
                    current++;
                }
            }
            if (current > num_of_one) {
                num_of_one = current;
            }
            current = 0;
            for (int k{}; k < n; ++k) {
                copied_a[k] = a[k];
            }
        }
    }
    cout << num_of_one << endl;
    delete[] a;
    delete[] copied_a;
    return 0;
}
