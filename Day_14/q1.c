//Problem: Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.

#include <stdio.h>

int main() {
    int n, i, j, val;
    int isIdentity = 1;

    if (scanf("%d", &n) != 1) return 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &val);
            if (i == j) {
                if (val != 1) isIdentity = 0;
            } else {
                if (val != 0) isIdentity = 0;
            }
        }
    }

    if (isIdentity) {
        printf("Identity Matrix\n");
    } else {
        printf("Not an Identity Matrix\n");
    }

    return 0;
}