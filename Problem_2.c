#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int k = (n * 2) - 1;
    int s = 0;

    // 2nd half shap
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int u = 1; u <= k; u++)
        {
            printf("*");
        }

        s++;
        k = k - 2;
        printf("\n");
    }
    return 0;
}

/* input 5
output =
*********
 *******
  *****
   ***
    *
*/