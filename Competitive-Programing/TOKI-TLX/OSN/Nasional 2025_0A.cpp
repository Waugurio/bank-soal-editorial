#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n; cin >> n;
    vector<ll> arr (n);
    
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    for (int i=n-1; i>=0; i--) {
        cout << arr[i] << "\n";
    }

    return 0;
}