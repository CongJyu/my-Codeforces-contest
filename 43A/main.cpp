// codeforces 43a

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Team {
    string name;
    int score{};
};

bool cmp(const Team &a, const Team &b) {
    return a.score > b.score;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    vector<Team> t;
    while (n--) {
        Team tmp;
        cin >> tmp.name;
        tmp.score = 1;
        if (!t.empty()) {
            bool found{false};
            for (int i{}; i < (int) t.size(); ++i) {
                if (t.at(i).name == tmp.name) {
                    found = true;
                    t.at(i).score += tmp.score;
                    break;
                }
            }
            if (!found) {
                t.push_back(tmp);
            }
        } else {
            t.push_back(tmp);
        }
    }
    sort(t.begin(), t.end(), cmp);
    cout << t.at(0).name << endl;
    return 0;
}
