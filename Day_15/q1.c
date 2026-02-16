#include <stdio.h>

int main() {
    int m, n;
    int sum = 0;
    int temp;

    if (scanf("%d %d", &m, &n) != 2) return 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &temp) != 1) break;
            
            if (i == j) {
                sum += temp;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}