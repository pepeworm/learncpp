#include <bits/stdc++.h>
using namespace std;

int main() {
    int b;
    cin >> b;
    int pressure = 5 * b - 400;
    cout << pressure << '\n';

    if (b < 100) {
        cout << 1 << '\n';
    } else if (b == 100) {
        cout << 0 << '\n';
    } else {
        cout << -1 << '\n';
    }

    return 0;
}
