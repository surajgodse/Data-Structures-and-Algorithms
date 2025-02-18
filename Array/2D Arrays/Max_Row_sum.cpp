#include <iostream>
using namespace std;
#include <climits>

int getMaxSum(int matrix[][3], int rows, int cols) {
    int maxSum = INT_MIN;
    
    for (int i = 0; i < rows; i++) {
        int currSum = 0;
        for (int j = 0; j < cols; j++) {
            currSum += matrix[i][j];
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum; 
}

int main() {
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    int result = getMaxSum(matrix, 4, 3);
    
    cout<< result;



    return 0;
}
