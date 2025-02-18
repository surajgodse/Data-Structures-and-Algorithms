#include <iostream>
using namespace std;

pair<int, int> findTarget(int matrix[][], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                return {i, j}; // Return the found index as a pair
            }
        }
    }
    return {-1, -1}; // Return (-1, -1) if target is not found
}

int main() {
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int target = 12;

    pair<int, int> result = findTarget(matrix, 4, 3, target);

    if (result.first != -1) {
        cout << "Target found at: (" << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
