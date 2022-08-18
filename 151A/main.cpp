// codeforces 151a

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, k{}, l{}, c{}, d{}, p{}, nl{}, np{};
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int answer{min(min((k * l) / nl, c * d), p / np)};
    cout << answer / n << endl;
    return 0;
}
