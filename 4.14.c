#include <stdio.h>

int main() {
    int a, b, gcd, lcm, temp, x, y;
    printf("输入两个正整数：");
    scanf("%d %d", &a, &b);
    x = a;  
    y = b;

    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    gcd = a;
    lcm = x * y / gcd;  

    printf("最大公约数：%d\n", gcd);
    printf("最小公倍数：%d\n", lcm);
    return 0;
}