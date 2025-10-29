#include <stdio.h>
int main()
{
    float score;
    printf("请输入学生成绩：");
    scanf("%f", &score);
    
    // 验证成绩有效性
    if (score < 0 || score > 100) {
        printf("成绩输入错误！\n");
        return 0;
    }
    
    // 判断等级
    if (score >= 90) printf("等级：A\n");
    else if (score >= 80) printf("等级：B\n");
    else if (score >= 70) printf("等级：C\n");
    else if (score >= 60) printf("等级：D\n");
    else printf("等级：E\n");
    
    return 0;
}