#include <stdio.h>
#include <math.h>
int char_to_ascii(int input)
{
    return input;
}
int main()
{
    char input;
    scanf("%c", &input);

    int ans = char_to_ascii(input);

    printf("%d", ans);

    return 0;
}