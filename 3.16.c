#include <stdio.h>
int main()
{
    int num, a, b, c;
    printf("请输入一个三位数：");
    scanf("%d", &num);
    
    a = num / 100;    // 百位
    b = (num / 10) % 10;  // 十位
    c = num % 10;     // 个位
    
    if (a*a*a + b*b*b + c*c*c == num) {
        printf("%d是水仙花数\n", num);
    } else {
        printf("%d不是水仙花数\n", num);
    }
    
    return 0;
}