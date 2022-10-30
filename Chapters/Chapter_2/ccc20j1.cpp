#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, m, l;
    cin >> s >> m >> l;
    int score = 1 * s + 2 * m + 3 * l;
    cout << ((score >= 10) ? "happy" : "sad") << '\n';

    return 0;
}
