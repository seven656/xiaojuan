#include <stdio.h>
int main()
{
    int i, n, s = 1;
    printf("Please enter n:");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("n should be ≥1\n");
        return 1;
    }
    for (i = 1; i <= n; i++)
        s = s * i;  
    printf("%d! = %d\n", n, s);
    return 0;
}