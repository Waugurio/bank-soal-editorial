#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll MOD = 1e9 + 7;

int exp(int a, int b) {
    if(!b) return 1;
    ll half = exp(a,b/2);
    if(b%2 == 0) return (half * half) % MOD;
    else return (((half * half) % MOD) * a) % MOD;
}

int main() {
    int a,b; cin >> a >> b;
    cout << exp(a,b);
    return 0;
}