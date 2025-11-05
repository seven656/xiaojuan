#include <stdio.h>
int main()
{
    int k = 100;
    while (k >= 1)  
    {
        printf("%4d", k);
        if ((101 - k) % 10 == 0)
            printf("\n");
        k--;
    }
    return 0;
}