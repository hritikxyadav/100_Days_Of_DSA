//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

#include <stdio.h>
#include <stdlib.h>

void rotate(int** matrix, int matrixSize) {
    int i, j, temp;

    for (i = 0; i < matrixSize; i++) {
        for (j = i + 1; j < matrixSize; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (i = 0; i < matrixSize; i++) {
        for (j = 0; j < matrixSize / 2; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][matrixSize - 1 - j];
            matrix[i][matrixSize - 1 - j] = temp;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    rotate(matrix, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) free(matrix[i]);
    free(matrix);

    return 0;
}