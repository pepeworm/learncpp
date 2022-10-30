#include <bits/stdc++.h>
using namespace std;

string s, curr = "", currV;
bool currS, trip = false; 

void print() {
    cout << curr << ((currS) ? " tighten " : " loosen ") << currV << '\n';
    curr = "";
    currV = "";
    trip = false;
}

int main() {
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+' && s[i] != '-' && !isdigit(s[i])) {
            if (trip) {
                print();
                i--;
            } else {
                curr.push_back(s[i]);
            }
        } else if (isdigit(s[i])) {
            currV.push_back(s[i]);
            trip = true;
        } else {
            currS = (s[i] == '+') ? true : false;
        }
    }

    print();

    return 0;
}
