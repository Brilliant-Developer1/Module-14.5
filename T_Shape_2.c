#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    int s = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int u = 1; u <= k; u++)
        {
            printf("*");
        }

        s--;
        k += 2;
        printf("\n");
    }
    return 0;
}