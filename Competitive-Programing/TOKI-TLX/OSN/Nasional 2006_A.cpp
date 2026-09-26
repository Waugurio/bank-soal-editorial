#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    short ans = 0, n; cin >> n;
    while (n/5) {
        n /= 5;
        ans += n;
    }
    cout << ans;
}
