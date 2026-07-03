#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;

bool isPrime[MAXN + 5];

int main() {
    //input & deklarasi
    int cnt = 0,n, a; cin >> n >> a;
    memset(isPrime, true, sizeof isPrime);
    isPrime[0] = isPrime[1] = false;
    
    //mengeleminasi kelipatan sampai ke-n
    for (int i = 2; i <= n; i++) {
        if (!isPrime[i]) continue;
        for (int j = 2*i; j <=n; j+= i) {
            isPrime[j] = false;
        }
    }
    
    //mencari bilangan prima ke-a
    for (int i = 2; i <=MAXN; i++) {
        if (!isPrime[i]) continue;
        cnt++;
        if (cnt == a) cout << i;
    }
    return 0;
}