#include <bits/stdc++.h>
using namespace std;

void salah() {
    cout << "Sagalagah\n";
}

void benar() {
    cout << "Begenagar\n";
}

bool solve(string s, int n) {
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'i' ||s[i] == 'u' || s[i] == 'e' || s[i] == 'o') {
            if (i + 2 >= n) return false;
            if (s[i+1] != 'g' || s[i+2] != s[i]) {
                return false;
            } else i+= 2;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    
    while (t--) {
        string s; cin >> s;
        int n = s.size();

        if (solve(s,n)) benar();
        else salah();
    }
    return 0;
}