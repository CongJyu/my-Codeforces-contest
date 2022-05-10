// problem d

#include <iostream>

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
        
    }
    return 0;
}
