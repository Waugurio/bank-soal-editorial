#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> bukit_lembah,valid, ketinggian;
    ll n;
    while (cin >> n) {
        valid.push_back(n);
    }
    ketinggian.push_back(valid[0]);
    for (ll i = 1; i < valid.size(); i++) {
        if (valid[i] != valid[i-1]) ketinggian.push_back(valid[i]);
    }

    if (ketinggian[0] > ketinggian[1]) {
        bukit_lembah.push_back(ketinggian[0]);
    } else if (ketinggian[0] < ketinggian[1]) {
        bukit_lembah.push_back(ketinggian[0]);
    }
    for (ll i = 1; i < ketinggian.size(); i++) {
        if (i != ketinggian.size() - 1) {
            if (ketinggian[i] > ketinggian[i-1] && ketinggian[i] > ketinggian[i+1]) {
                bukit_lembah.push_back(ketinggian[i]);
            } else if (ketinggian[i] < ketinggian[i-1] && ketinggian[i] < ketinggian[i+1]) {
                bukit_lembah.push_back(ketinggian[i]);
            }
        } else if (ketinggian[i] > ketinggian[i - 1]) {
            bukit_lembah.push_back(ketinggian[i]);
        } else {
            bukit_lembah.push_back(ketinggian[i]);
        }
    }
    ll selisih = 0;
    for (ll i = 0; i < bukit_lembah.size()-1; i++) {
        selisih = max(selisih,abs(bukit_lembah[i] - bukit_lembah[i+1]));
//        cout << bukit_lembah[i] << " ";
    }

    cout << selisih;

    return 0;
}
