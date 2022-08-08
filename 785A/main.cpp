// codeforces 785a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int cnt{};
    while (n--) {
        string s;
        cin >> s;
        if (s == "Tetrahedron") {
            cnt += 4;
        } else if (s == "Cube") {
            cnt += 6;
        } else if (s == "Octahedron") {
            cnt += 8;
        } else if (s == "Dodecahedron") {
            cnt += 12;
        } else if (s == "Icosahedron") {
            cnt += 20;
        }
    }
    cout << cnt << endl;
    return 0;
}
