#include <stdio.h>
#include <math.h>
char small_to_capital(char input)
{
    int ans = input - 32;
    return ans;
}
int main()
{
    char input;
    scanf("%c", &input);

    char ans = small_to_capital(input);

    printf("%c", ans);

    return 0;
}