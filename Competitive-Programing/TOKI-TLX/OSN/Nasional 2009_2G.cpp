#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    int n = s.length();

    int a = ceil(sqrt(n));
    
    for (int i = n; i <= a*a; i++) {
            s += '.';
    }

    int k = 0;
    for (int i = 0; i < a; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < a; j++) {
                cout << s[k];
                k++;
            }
            cout << endl;
        } else {
            k +=a-1;
            for (int j = 0; j < a; j++) {
                cout << s[k];
                k--;
            }
            cout << endl;
            k += a+1;
        }
    }
    return 0;
}
