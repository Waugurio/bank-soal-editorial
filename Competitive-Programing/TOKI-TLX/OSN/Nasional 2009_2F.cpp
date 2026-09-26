#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n, m, o;
    cin >> n >> m >> o;
    
    vector<vector<int>> arr(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    while (o--) {
        string p;
        cin >> p;
        
        vector<vector<int>> new_arr;
        
        if (p == "_") {
            new_arr = vector<vector<int>>(n, vector<int>(m));
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    new_arr[i][j] = arr[n-1-i][j];
                }
            }
        }
        else if (p == "|") {
            new_arr = vector<vector<int>>(n, vector<int>(m));
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    new_arr[i][j] = arr[i][m-1-j];
                }
            }
        }
        else if (p == "90") {
            new_arr = vector<vector<int>>(m, vector<int>(n));
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    new_arr[j][n-1-i] = arr[i][j];
                }
            }
            swap(n, m);
        }
        else if (p == "180") {
            new_arr = vector<vector<int>>(n, vector<int>(m));
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    new_arr[i][j] = arr[n-1-i][m-1-j];
                }
            }
        }
        else { // "270"
            new_arr = vector<vector<int>>(m, vector<int>(n));
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    new_arr[m-1-j][i] = arr[i][j];
                }
            }
            swap(n, m);
        }
        
        arr = move(new_arr); // Move assignment, lebih efisien
    }
    
    // Output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " \n"[j == m-1];
        }
    }
    
    return 0;
}