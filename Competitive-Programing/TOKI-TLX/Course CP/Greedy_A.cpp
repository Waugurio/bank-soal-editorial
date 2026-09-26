#include <bits/stdc++.h>
using namespace std;
int n, k,cnt=0; 
const int MAXN = 1000;
bool isPrime[MAXN + 5];

void sieve() {
    memset(isPrime, true, sizeof isPrime);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (!isPrime[i]) continue;
        for (int j = i*i; j <=n; j+= i) {
            isPrime[j] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    sieve();

    if (n%2==1) n--;
    for(int i = 2; i<=n; i++) {
        if (isPrime[n-i] && isPrime[i]) cnt++;
    }
    if(cnt >= k) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    
    return 0;
}