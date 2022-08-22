// codeforces 20c

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int g[10000][10000];

bool larger(const vector<int> &a, vector<int> b, int n) {
    b.push_back(n);
    int min_len{(int) min(a.size(), b.size())};
    for (int i{}; i < min_len; ++i) {
        if (a[i] != b[i]) {
            return a[i] > b[i];
        }
    }
    return false;
}

void dijkstra(int source, int n) {
    int *dist{new int[n + 1]}, *mark{new int[n + 1]};
    vector<int> route_str[n];
    for (int i{}; i < n + 1; ++i) {
        dist[i] = (1 << 30) - 1;
        mark[i] = 0;
    }
    route_str[0].push_back(1);
    dist[source] = 0;
    int v;
    for (int i{}; i < n; ++i) {
        v = n;
        for (int j{}; j < n; ++j) {
            if (mark[j] == 0 and dist[j] < dist[v]) {
                v = j;
            }
        }
        if (v == n) {
            break;
        }
        mark[v] = 1;
        for (int j{}; j < n; ++j) {
            if (((dist[j] == dist[v] + g[v][j]) and larger(route_str[j], route_str[v], j + 1)) or
                dist[j] > dist[v] + g[v][j]) {
                dist[j] = dist[v] + g[v][j];
                route_str[j] = route_str[v];
                route_str[j].push_back(j + 1);
                clog << "test" << endl;
            }
        }
    }
    if (dist[n - 1] == (1 << 30) - 1) {
        cout << -1 << endl;
    } else {
        for (int &i: route_str[n - 1]) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{}, s{1}, source{}, dest{}, weight{};
    cin >> n >> m;
    for (int i{}; i < n; i++) {
        for (int j{}; j < n; j++) {
            g[i][j] = (1 << 30) - 1;
        }
        g[i][i] = 0;
    }
    for (int i{}; i < m; i++) {
        cin >> source >> dest >> weight;
        if (g[source - 1][dest - 1] > weight) {
            g[source - 1][dest - 1] = weight;
            g[dest - 1][source - 1] = weight;
        }
    }
    dijkstra(s - 1, n);
    return 0;
}
