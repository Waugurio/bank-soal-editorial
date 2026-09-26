#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int bisearch(const vector<pair<string,int>>& p, const string& s) {
    int left = 0, right = (int)p.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (p[mid].fi == s) {
            return p[mid].se;
        } else if (p[mid].fi < s) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Not found
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q; cin >> n >> q;
    vector<pair<string,int>> p(n);
    string s;

    for (int i = 0; i < n; i++) {
        cin >> p[i].fi >> p[i].se;
    }
    while (q--) {
        cin >> s;
        cout << bisearch(p, s) << "\n";
    }

    
}