//Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.


#include <stdio.h>

int main() {
    int n, i, j;
    
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("%d", arr[0]);
        return 0;
    }

    i = 0; 
    for (j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    for (int k = 0; k <= i; k++) {
        printf("%d%s", arr[k], (k == i ? "" : " "));
    }

    return 0;
}