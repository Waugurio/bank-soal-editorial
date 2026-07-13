#include <iostream>
#include <vector>
#include <string>
#include <sstream>

/**
 * Generates a geometric pattern on an n x n grid.
 *
 * Args:
 *     n:     Grid size (n x n, always odd for diamond)
 *     shape: Either "checkerboard" or "diamond"
 *
 * Returns:
 *     A 2D vector of integers (0 or 1).
 */
std::vector<std::vector<int>> generate_shape(int n, const std::string& shape) {

        // WRITE YOUR CODE HERE
    std::vector<std::vector<int>> grid(n, std::vector<int>(n, 0));
    
    if (shape == "checkerboard") {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                // Aturan checkerboard: top-left (0,0) = 0, lalu selang-seling
                grid[i][j] = (i + j) % 2;
            }
        }
    } else if (shape == "diamond") {
        int c = n / 2; // titik tengah (karena n selalu ganjil)
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                // Jarak Manhattan dari pusat (tanpa math.h)
                int di = (i > c) ? (i - c) : (c - i);
                int dj = (j > c) ? (j - c) : (c - j);
                if (di + dj <= c) {
                    grid[i][j] = 1;
                }
            }
        }
    }
    
    return grid;

    }


// --- Main execution block. DO NOT MODIFY ---
int main() {
    try {
        std::string line;
        std::getline(std::cin, line);
        int n = std::stoi(line);

        std::string shape;
        std::getline(std::cin, shape);

        auto result = generate_shape(n, shape);
        for (int i = 0; i < (int)result.size(); i++) {
            for (int j = 0; j < (int)result[i].size(); j++) {
                if (j > 0) std::cout << " ";
                std::cout << result[i][j];
            }
            std::cout << "\n";
        }

    } catch (const std::exception& e) {
        std::cerr << "An unexpected error occurred: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
