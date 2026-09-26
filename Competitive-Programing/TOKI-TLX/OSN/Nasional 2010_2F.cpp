#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //input
    string a,b; cin >> a >> b;
    bool carry = false;
    int n = a.length(),m = b.length();
    
// (((a[n-1-i]-'0') + (b[m-1-i]-'0')) % 10 + '0';)

    for (int i = 0; i < max(n,m); i++) {
        //jika sudah diujung tapi carry masih ada
        //jika index tidak valid
        if (n-1-i < 0 || m-1-i < 0) {
            //jika ada carry
            if (carry) {
                //jika index tidak valid di a
                if (n-1-i < 0) {
                    int sum = (b[m-1-i]-'0') + 1;
                    //jika ada carry lagi
                    if (sum > 9) {
                        a.insert(a.begin(), (sum%10)+'0');
                        carry = true;
                    }
                    //jika tidak ada carry lagi
                    else {
                        a.insert(a.begin(), sum+'0');
                        carry = false;
                    }
                }
                //jika index valid di b 
                else {
                    int sum = (a[n-1-i]-'0') + 1;
                    //jika ada carry lagi
                    if (sum > 9) {
                        a[n-1-i] = (sum%10)+'0';
                        carry = true;
                    }
                    //jika tidak ada carry lagi 
                    else {
                        a[n-1-i] = sum+'0';
                        carry = false;
                    }
                }
            } 
            //jika tidak ada carry
            else {
                if (n-1-i < 0) {
                    a.insert(a.begin(), b[m-1-i]);
                } else {
                    //index valid di a
                    //tidak ada carry
                    //tidak perlu diubah
                }
            }
        }
        //jika index valid
        else { 
            //jika ada carry
            if (carry) {
                int sum = (a[n-1-i]-'0') + (b[m-1-i]-'0') + 1;
                //jika ada carry lagi
                if (sum > 9) {
                    a[n-1-i] = (sum%10)+'0';
                    carry = true;
                }
                //jika tidak ada carry lagi
                else {
                    a[n-1-i] = sum+'0';
                    carry = false;
                }
            } 
            //jika tidak ada carry
            else {
                int sum = (a[n-1-i]-'0') + (b[m-1-i]-'0');
                //jika ada carry
                if (sum > 9) {
                    a[n-1-i] = (sum%10)+'0';
                    carry = true;
                }
                //jika tidak ada carry
                else {
                    a[n-1-i] = sum+'0';
                    carry = false;
                }
            }
        }
        if (max(n,m) - 1 - i == 0 && carry) {
            a.insert(a.begin(), '1');
            break;
        }
    }
    cout << a;
}