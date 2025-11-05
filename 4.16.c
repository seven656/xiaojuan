#include <stdio.h>

int main()
{
    double stranger_give = 100000.0 * 30;
    double rich_give = 0.0;
    double money = 0.01;  

    for (int i = 1; i <= 30; i++) {
        rich_give += money;
        money *= 2;  
    }

    printf("陌生人给富翁：%.2f元\n", stranger_give);
    printf("富翁给陌生人：%.2f元\n", rich_give);
    return 0;
}