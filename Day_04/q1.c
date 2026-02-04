//Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

#include <stdio.h>

int main() {
    int n, i, temp;
    int start, end;

    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    start = 0;
    end = n - 1;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}