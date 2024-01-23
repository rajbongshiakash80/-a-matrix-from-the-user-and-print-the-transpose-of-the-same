#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Function to input a matrix from the user
void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate and print the transpose of a matrix
void transposeMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int transpose[MAX_COLS][MAX_ROWS];

    // Calculate the transpose
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Print the transpose
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input from user: matrix dimensions
    printf("Enter the number of rows (1-%d): ", MAX_ROWS);
    scanf("%d", &rows);
    printf("Enter the number of columns (1-%d): ", MAX_COLS);
    scanf("%d", &cols);

    if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS) {
        printf("Invalid matrix dimensions.\n");
        return 1; // Return an error code
    }

    int matrix[MAX_ROWS][MAX_COLS];

    // Input matrix from user
    inputMatrix(matrix, rows, cols);

    // Print original matrix
    printMatrix(matrix, rows, cols);

    // Print transpose of the matrix
    transposeMatrix(matrix, rows, cols);

    return 0; // Return success code
}
