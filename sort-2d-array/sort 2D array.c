#include <stdio.h>

// Function to sort each row of the 2D array
void sortRows(int arr[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = 0; k < cols - j - 1; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    // Swap elements
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
}

int main() {
    int arr[5][10] = {
        {5, 2, 9, 1, 5, 6, 0, 3, 4, 8},
        {15, 12, 19, 11, 15, 16, 10, 13, 14, 18},
        {25, 22, 29, 21, 25, 26, 20, 23, 24, 28},
        {35, 32, 39, 31, 35, 36, 30, 33, 34, 38},
        {45, 42, 49, 41, 45, 46, 40, 43, 44, 48}
    };
    
    int rows = 5;
    int cols = 10;
    
    // Sort each row
    sortRows(arr, rows, cols);
    
    // Print the sorted 2D array
    printf("Sorted 2D Array Across Rows:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
