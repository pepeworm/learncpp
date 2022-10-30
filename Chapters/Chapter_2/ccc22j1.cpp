#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, s;
    cin >> r >> s;
    int cupcakes = 8 * r + 3 * s;
    int ans = cupcakes - 28;
    cout << ans << '\n';

    return 0;
}

