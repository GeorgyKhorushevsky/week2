#include <stdio.h>

int main()
{
    int n;
    scanf("%d", n);
    int i = 1;
    for (int j = 0; j<=n; j++){
        for (int q = 0; q<n-j; q++){
            printf(" ");
        }
        for (int q = 0; q<i; q++){
            printf("*");
        }
        for (int q = 0; q<n-j; q++){
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}