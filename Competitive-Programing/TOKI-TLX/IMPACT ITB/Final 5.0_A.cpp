#include <iostream>
typedef long long ll;
using namespace std;

int main() {
    int n; cin >> n;
    
    while(n--) {
        ll a; cin >> a;
        
        if (a & 1) cout << "YA" << endl;
        else cout << "TIDAK"<< endl;
    
    }
}