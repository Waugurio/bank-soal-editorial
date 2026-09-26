#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll factor(ll x, ll t) {
    ll hasil = 1;
    for (ll i = 2; i*i <= x; i++) {
        if (x%i == 0) {
            if(i <= t) hasil++;
            if((x/i) <= t && (x/i) != i) hasil++;
        }
    }
    return hasil;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,t,k; cin >> n >> t >> k;
    ll hasil = 0;

    if(t <= k) {
        cout << n;
        return 0;
    }

    for (ll i = 2; i <= n; i++) {
        if ((t/i) + factor(i,t) <= k) hasil++;
    }

    cout << hasil << "\n";
    return 0;
}