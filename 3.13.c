#include <stdio.h>
int main()
{
    char gender;
    float weight;
    printf("请输入性别（m/f）和体重（公斤）：");
    scanf("%c%f", &gender, &weight);
    
    if (gender == 'm' || gender == 'M') {
        if (weight > 120) printf("输血量为200毫升\n");
        else printf("输血量为180毫升\n");
    } else if (gender == 'f' || gender == 'F') {
        if (weight > 100) printf("输血量为150毫升\n");
        else printf("输血量为120毫升\n");
    } else {
        printf("性别输入错误\n");
    }
    return 0;
}