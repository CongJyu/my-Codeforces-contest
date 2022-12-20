// 1704c
// no idea

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct House {
    int num{};
    int infect{};
};

void solution() {
    int n{}, m{};
    cin >> n >> m;
    queue<House> h;
    for (int i{}; i < n; ++i) {
        House tmp;
        tmp.num = i + 1;
        tmp.infect = 0;
        h.push(tmp);
    }
    int j{};
    for (int i{}; i < m; ++i) {
        int infected{};
        cin >> infected;
        for (; j < infected - 1; ++j) {
            h.push(h.front());
            h.pop();
        }
        h.front().infect = 1;
    }
    int max_uninfected{};
    while (h.front().infect != 1) {
        h.push(h.front());
        h.pop();
    }
    // test
    clog << h.front().num << " " << h.front().infect << endl;
    // test
    h.push(h.front());
    h.pop();
    int cnt{};
    for (int i{}; i < (int) h.size(); ++i) {
        while (true) {
            if (h.front().infect == 0) {
                cnt++;
                h.push(h.front());
                h.pop();
            } else {
                h.push(h.front());
                h.pop();
                break;
            }
        }
        if (cnt > max_uninfected) {
            max_uninfected = cnt;
        }
        cnt = 0;
    }
    int least_infected{n - max_uninfected + 1};
    cout << least_infected << endl;
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
