#include<bits/stdc++.h>
using namespace std;
int cnt=0,maks=0;
float sum=0,n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    vector<int> a(n);
    for (int i =0; i<n; i++){
        cin >> a[i];
        if (a[i] >=75) cnt++;
        sum+=a[i];
        maks = max(maks,a[i]);
    }
    float avg = sum/n;
    cout << cnt << ' ' << fixed << setprecision(2) << avg << ' ' << maks; 

    return 0;
}