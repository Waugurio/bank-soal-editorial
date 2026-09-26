#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int p,q,r,t; scanf("%d %d %d %d", &p, &q, &r, &t);
    ll T;

    while (t--) {
        scanf("%lld", &T);
        if (T % p == 0 && T % q == 0 && T % r == 0) {
            printf("YA\n");
        } else {
            printf("TIDAK\n");
        }
    }

    return 0;
}