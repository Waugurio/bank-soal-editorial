#include <bits/stdc++.h>
using namespace std;

//binary search
int binser(vector<int> a,int n, int x) {
    int mid,l=0,r=n-1;
    while (l<r){
        mid = (l + (r-l))/2;
        if (a[mid] == x) {
            return mid+1;
        } else if (a[mid] > x) {
            r = mid-1;
        } else {
            l = mid+1;
        }
    }
    return -1;
}

int main(){
    int n,x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i<n ; i++) {
        cin >> a[i];
    }

    cout << binser(a,n,x);
    return 0;
}