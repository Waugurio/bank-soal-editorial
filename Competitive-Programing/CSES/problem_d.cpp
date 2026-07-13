#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

/**
 * @param events Vector of {player, frame, attack_value}
 * @param H      Starting HP for both players
 * @return vector {hp1, hp2} each clamped to min 0
 */
vector<int> processGame(vector<vector<int>> events, int H) {

    // WRITE YOUR CODE HERE
    // Urutkan events berdasarkan frame (ascending)
    sort(events.begin(), events.end(),
         [](const vector<int>& a, const vector<int>& b) {
             return a[1] < b[1];
         });

    int hp1 = H, hp2 = H;
    int i = 0, n = events.size();

    while (i < n) {
        int currentFrame = events[i][1];

        // Terapkan SEMUA serangan di frame yang sama
        while (i < n && events[i][1] == currentFrame) {
            int player = events[i][0];
            int damage = events[i][2];
            if (player == 1) {
                hp2 -= damage;   // player 1 menyerang player 2
            } else { // player == 2
                hp1 -= damage;   // player 2 menyerang player 1
            }
            ++i;
        }

        // Setelah seluruh frame diproses, baru cek KO
        if (hp1 <= 0 || hp2 <= 0) {
            break;
        }
    }

    // Clamp ke minimum 0
    if (hp1 < 0) hp1 = 0;
    if (hp2 < 0) hp2 = 0;
    return {hp1, hp2};
}


// --- Main execution block. DO NOT MODIFY ---
int main() {
    try {
        int H, n;
        cin >> H >> n;
        vector<vector<int>> events(n, vector<int>(3));
        for (int i = 0; i < n; i++) {
            cin >> events[i][0] >> events[i][1] >> events[i][2];
        }

        vector<int> result = processGame(events, H);
        cout << result[0] << " " << result[1] << endl;

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    return 0;
}