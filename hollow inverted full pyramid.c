#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(j = 0; j < i; j++) {
            printf(" ");
        }
        for(k = 0; k < (n - i); k++) {
            if (i == 0 || k == 0 || k == (n - i - 1)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
