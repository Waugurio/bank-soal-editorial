#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int ab,x;

    cin >> ab;
    for (int i = 1; i<n; i++) {
        cin >> x;
        ab = ab * x / gcd(ab, x);
    }

    cout << ab;
    return 0;
}