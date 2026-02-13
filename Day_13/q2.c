
#include<stdlib.h> // Essential for NULL and malloc
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    if (matrixSize == 0) {
        *returnSize = 0;
        return NULL;
    }

    int rows = matrixSize;
    int cols = matrixColSize[0];
    int totalElements = rows * cols;
    int* result = (int*)malloc(sizeof(int) * totalElements);
    int count = 0;

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (count < totalElements) {
        for (int i = left; i <= right && count < totalElements; i++) {
            result[count++] = matrix[top][i];
        }
        top++;

        for (int i = top; i <= bottom && count < totalElements; i++) {
            result[count++] = matrix[i][right];
        }
        right--;

        for (int i = right; i >= left && count < totalElements; i--) {
            result[count++] = matrix[bottom][i];
        }
        bottom--;

        for (int i = bottom; i >= top && count < totalElements; i--) {
            result[count++] = matrix[i][left];
        }
        left++;
    }

    *returnSize = count;
    return result;
}