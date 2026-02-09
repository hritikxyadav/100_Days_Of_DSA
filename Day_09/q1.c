//Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.

#include <stdio.h>

void mirror(char *str) {
    if (*str == '\0') return;
    mirror(str + 1);
    printf("%c", *str);
}

int main() {
    char name[100];
    if (scanf("%s", name) == 1) {
        mirror(name);
    }
    return 0;
}