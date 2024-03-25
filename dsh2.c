#include <stdio.h>

int main() {
    int rreshta = 5;
    for (int i = 1; i <= rreshta; i++) {
        for (int j = 1; j <= rreshta - i; j++) {
            printf("_");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

