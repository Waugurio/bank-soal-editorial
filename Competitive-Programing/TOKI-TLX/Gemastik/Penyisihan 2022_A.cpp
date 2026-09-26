#include <iostream>
using namespace std;

int main() {
    double a,b,c,d; cin >> a >> b >> c >> d;
    if (a/b == c/d) {
        cout << "sama";
    } else {
        if (a/b > c/d) {
            cout << "lebih besar";
        } else {
            cout << "lebih kecil";
        }
    }
    return 0;
}