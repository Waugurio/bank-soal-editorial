#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    // input-----------------------------
    int n,k; cin >> n >> k;
    int a[n], b[k];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i >= 1) {
            a[i] += a[i-1];
        }
    }
    for (int i = 0; i < k; i++) cin >> b[i];
    
    // peletakan + Print------------------
    for (int i = 0; i < k; i++) {
        int ans = 0, j = 0;
        while (b[i] >= a[j] && j < n) {
            j++;
            ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}
