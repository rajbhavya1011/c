#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter the dimensions of 1st matrix:");
    scanf("%d %d", &m, &n);

    int a[m][n];

    printf("Enter elements of 1st matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the dimensions of 2nd matrix:\n");
    scanf("%d %d", &p, &q);

    int b[p][q];

        printf("Enter elements of 2nd matrix:\n");
        for (int k = 0; k < p; k++) {
            for (int l = 0; l < q; l++) {
                scanf("%d", &b[k][l]);
            }
        }
      int c[m][q];
        // Multiplication
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                int sum = 0;
                for (int k = 0; k < n; k++) {
                    sum = sum + (a[i][k] * b[k][j]);
                }
                c[i][j] = sum;
            }
        }

        printf("Resulting Matrix:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
