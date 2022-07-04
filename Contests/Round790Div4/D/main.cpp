// problem d

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        int n = 0, m = 0;
        cin >> n >> m;
        int **board = new int *[n];
        for (int i = 0; i < n; ++i) {
            board[i] = new int[m];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> board[i][j];
            }
        }
        int max_v = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int now = 0;
                int ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
                    now += board[ci][cj];  // left-up
                    ci--;
                    cj--;
                }
                ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
                    now += board[ci][cj];  // right-up
                    ci++;
                    cj--;
                }
                ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
                    now += board[ci][cj];  // left-down
                    ci--;
                    cj++;
                }
                ci = i, cj = j;
                while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
                    now += board[ci][cj];  // right-down
                    ci++;
                    cj++;
                }
                now -= board[i][j] * 3;
                max_v = max(max_v, now);
            }
        }
        cout << max_v << endl;
    }
    return 0;
}
