#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    
    vector<int> arr;
    for (int i = 1; i < 8; i++) {
        if (s[i] != s[i-1]) {
            arr.push_back(i-1);
            arr.push_back(i);
            break;
        }
    }
    

    if (arr[0] != 0 && arr[1] != 7) {
        if (s[arr[0]] == s[0] && s[arr[0]] == s[7]) {
            cout << arr[1]+1;
        } else if (s[arr[1]] == s[0] && s[arr[1]] == s[7]) {
            cout << arr[0]+1;
        }
    } else {
        if (s[arr[0]] == s[3] && s[arr[0]] == s[4]) {
            cout << arr[1]+1;
        } else if (s[arr[1]] == s[3] && s[arr[1]] == s[4]) {
            cout << arr[0]+1;
        }
    }
    
    return 0;
}
