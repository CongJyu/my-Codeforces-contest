// codeforces 1538a
// no idea

#include <iostream>
#include <algorithm>

using namespace std;

void solution() {
    int n{};
    int *a{new int[n]}, *img{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
        img[i] = a[i];
    }
    sort(img, img + n);
    int max_stone{img[n - 1]}, min_stone{img[0]};
    int step[4]{};
    // case 1
    bool found_min{false}, found_max{false};
    for (int i{}; i < n; ++i) {
        step[0]++;
        if (a[i] == min_stone) {
            found_min = true;
        } else if (a[i] == max_stone) {
            found_max = true;
        }
        if (found_max and found_min) {
            break;
        }
    }
    // case 2
    found_max = false;
    found_min = false;
    for (int i{n - 1}; i >= 0; --i) {
        step[1]++;
        if (a[i] == min_stone) {
            found_min = true;
        } else if (a[i] == max_stone) {
            found_max = true;
        }
        if (found_max and found_min) {
            break;
        }
    }
    // case 3
    found_max = false;
    found_min = false;
    int flag{};
    for (int i{}; i < n; ++i) {
        step[2]++;
        if (a[i] == min_stone) {
            flag = i;
            break;
        }
    }
    for (int i{n - 1}; i > flag; --i) {
        step[2]++;
        if (a[i] == max_stone) {
            break;
        }
    }
    // case 4
    flag = 0;
    for (int i{}; i < n; ++i) {
        step[3]++;
        if (a[i] == max_stone) {
            flag = i;
            break;
        }
    }
    for (int i{n - 1}; i > flag; --i) {
        step[3]++;
        if (a[i] == min_stone) {
            break;
        }
    }
    sort(step, step + 4);
    delete[] a;
    delete[] img;
    cout << step[0] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
