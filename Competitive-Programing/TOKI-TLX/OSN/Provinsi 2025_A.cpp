#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s; cin >> s;
    int n = s.length();
    
    // Total count seluruh string
    int totalO = 0, totalS = 0, totalN = 0, totalP = 0;
    for (char c : s) {
        if (c == 'O') totalO++;
        else if (c == 'S') totalS++;
        else if (c == 'N') totalN++;
        else if (c == 'P') totalP++;
    }
    
    // Jika kurang salah satu karakter, tidak mungkin
    if (totalO == 0 || totalS == 0 || totalN == 0 || totalP == 0) {
        cout << -1 << endl;
        return 0;
    }
    
    // Hitung prefix counts
    int prefO = 0, prefS = 0, prefN = 0, prefP = 0;
    int ans = -1;
    
    // i adalah posisi pemisahan: OSN sebelum i, P dari i ke akhir
    for (int i = 0; i <= n; i++) {
        if (i > 0) {
            char c = s[i-1];
            if (c == 'O') prefO++;
            else if (c == 'S') prefS++;
            else if (c == 'N') prefN++;
            else if (c == 'P') prefP++;
        }
        
        // OSN yang ada di prefix (sebelum i)
        // P yang ada di suffix (dari i ke akhir) = totalP - prefP
        int p_suffix = totalP - prefP;
        
        if (prefO > 0 && prefS > 0 && prefN > 0 && p_suffix > 0) {
            // Ambil semua O, S, N di prefix dan semua P di suffix
            int length = prefO + prefS + prefN + p_suffix;
            ans = max(ans, length);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}