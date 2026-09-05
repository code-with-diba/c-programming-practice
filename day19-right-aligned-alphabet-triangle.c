#include <stdio.h>

int main() {
    int i, j, k, n , a, d;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

         a = 1;
        for (k = 1; k <= i; k++) {
             d = a + 64;
             char ch = (char)d;
            printf("%c ",ch);
            a++;
        }

        printf("\n");
    }

    return 0;
}
