#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

//comparator first naik dan se turun
bool comp(pair<int,int>a,pair<int,int>b) {
    if(a.fi == b.fi) {
        return a.se > b.se;
    }
    return a.fi < b.fi;
}

int main() {
    //inisialisasi
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n; 
    vector<pair<int,int>> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i].fi >> a[i].se;
    }

    //sorting pair first menaik dan second menurun
    sort(a.begin(),a.end(),comp);

    for(int i=0; i < n ;i++){
        cout << a[i].fi << ',' << a[i].se << '\n';
    }
}