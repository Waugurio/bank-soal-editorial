#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <=1) return 0;
    for (int i = 0; i*i <=n; i++){
        if (n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n = 9;
    cout << isPrime(n);
    return 0;
}