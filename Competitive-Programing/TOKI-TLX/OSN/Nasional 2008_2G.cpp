#include <bits/stdc++.h>
using namespace std;

vector<bool> prime(1000,true);
void primeGen(){
    for(int i = 2; i<1000; i++) {
        if(prime[i]) {
            for(int j=i+i; j < 1000; j+=i){
                prime[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int ans,a,b; cin >> a >> b;
    primeGen();

    for(int i = a-1; i < b-1; i++) {
        if (!prime[i]) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}