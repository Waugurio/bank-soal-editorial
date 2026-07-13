#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,ans = 0,prob = 0;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (ll i = 2; i*i <= n; i++) {
        ll cnt = 0,temp;
            if (n % a[i] == 0) {
                temp = a[i]*n;
                cout << temp << endl;
                for (ll j = 1; j*j <= temp; j++) {
                    if (j*j == temp) cnt++;
                    else if (temp % j == 0) cnt+=2;
                }
                if (cnt > prob) ans = i;
                prob = max(cnt,prob); 
                }
    }
    if (ans == 0) cout << n << '\n';
    else cout << ans << '\n';
    return 0;
}