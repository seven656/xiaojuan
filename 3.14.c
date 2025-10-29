#include <stdio.h>
int main()
{
    int num, digit1=0, digit2=0, digit3=0, digit4=0, digit5=0, len;
    printf("请输入一个不多于5位的正整数：");
    scanf("%d", &num);
    
    if (num >= 10000) len = 5;
    else if (num >= 1000) len = 4;
    else if (num >= 100) len = 3;
    else if (num >= 10) len = 2;
    else len = 1;
    printf("位数：%d\n", len);
    
    switch (len) {
        case 5:
            digit5 = num / 10000;
            digit4 = (num / 1000) % 10;
            digit3 = (num / 100) % 10;
            digit2 = (num / 10) % 10;
            digit1 = num % 10;
            printf("各位数字：%d %d %d %d %d\n", digit5, digit4, digit3, digit2, digit1);
            printf("逆序：%d %d %d %d %d\n", digit1, digit2, digit3, digit4, digit5);
            break;
        case 4:
            digit4 = num / 1000;
            digit3 = (num / 100) % 10;
            digit2 = (num / 10) % 10;
            digit1 = num % 10;
            printf("各位数字：%d %d %d %d\n", digit4, digit3, digit2, digit1);
            printf("逆序：%d %d %d %d\n", digit1, digit2, digit3, digit4);
            break;
        case 3:
            digit3 = num / 100;
            digit2 = (num / 10) % 10;
            digit1 = num % 10;
            printf("各位数字：%d %d %d\n", digit3, digit2, digit1);
            printf("逆序：%d %d %d\n", digit1, digit2, digit3);
            break;
        case 2:
            digit2 = num / 10;
            digit1 = num % 10;
            printf("各位数字：%d %d\n", digit2, digit1);
            printf("逆序：%d %d\n", digit1, digit2);
            break;
        case 1:
            digit1 = num;
            printf("各位数字：%d\n", digit1);
            printf("逆序：%d\n", digit1);
            break;
    }
    return 0;
}