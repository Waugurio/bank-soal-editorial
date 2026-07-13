#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,c,n; // deklarasi

//binary exponential
int power(ll a, int b) {
    if (b == 0) return 1;
    ll temp = power(a,b/2);                   //contoh: a^10 = (a^5)^2
    if (b % 2 == 0) {                         //kalo pangkat genap
        return (temp*temp) % n;
    } else {                                  //kalo pangkat ganjil
        return ((((temp*temp) % n) * a) % n);
    }
}

int main() {
    ios::sync_with_stdio(false); //fastio
    cin.tie(0); cout.tie(0);

    cin >> a >> b >> c >> n; //input
    ll res = a;
    for (ll i = 0; i < c; i++) { //mengulang hasil power sebanyak c karena: (a^b)^c = a^b x a^b x a^b...
        res = power(res,b);
    }
    cout << res + 1; //maju 1 karena n%n = 0, jadi kembali ke 1
    return 0;
}