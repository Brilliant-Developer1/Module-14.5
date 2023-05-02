#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int k = 1;
    int s = n - 1;

    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int u = 1; u <= k; u++)
        {
            printf("*");
        }

        if (i <= n - 1)
        {
            s--;
            k += 2;
        }
        else if (i == n)
        {
            printf("\n");
            continue;
        }
        else
        {
            s++;
            k -= 2;
        }
        printf("\n");
    }

    return 0;
}
