// codeforces 682c

#include <iostream>

using namespace std;

int head[100001], nxt[100000], to[100000], val[100001], weight[100000];
int n{}, preserve_count{};

void dfs(int curr_pos, int dist) {
    if (dist > val[curr_pos]) {
        return;
    } else {
        preserve_count++;
        for (int i{head[curr_pos]}; i != 0; i = nxt[i]) {
            if (dist > 0) {
                dfs(to[i], dist + weight[i]);
            } else {
                dfs(to[i], weight[i]);
            }
        }
    }
}

void insert(const int &source, const int &dest, const int &wt) {
    nxt[dest - 1] = head[source];
    head[source] = dest - 1;
    to[dest - 1] = dest;
    weight[dest - 1] = wt;
}

int main() {
    ios::sync_with_stdio(false);
    int parent_tmp{}, weight_tmp{};
    cin >> n;
    for (int i{1}; i <= n; ++i) {
        cin >> val[i];
    }
    for (int i{1}; i < n; ++i) {
        cin >> parent_tmp >> weight_tmp;
        insert(parent_tmp, i + 1, weight_tmp);
    }
    dfs(1, 0);
    cout << n - preserve_count << endl;
    return 0;
}
