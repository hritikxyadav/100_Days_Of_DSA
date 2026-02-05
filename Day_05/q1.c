//Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

#include <stdio.h>

int main() {
    int p, q, i, j;

    if (scanf("%d", &p) != 1) return 0;
    int arr1[p];
    for (i = 0; i < p; i++) {
        scanf("%d", &arr1[i]);
    }

    if (scanf("%d", &q) != 1) return 0;
    int arr2[q];
    for (i = 0; i < q; i++) {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;

    while (i < p && j < q) {
        if (arr1[i] <= arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else {
            printf("%d ", arr2[j]);
            j++;
        }
    }

    while (i < p) {
        printf("%d ", arr1[i]);
        i++;
    }

    while (j < q) {
        printf("%d ", arr2[j]);
        j++;
    }
    printf("\n");

    return 0;
}