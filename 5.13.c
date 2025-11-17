#include <stdio.h>
int main() {
    char ch;
    int letter=0, space=0, digit=0, other=0;
    while ((ch = getchar()) != '\n') {  
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) letter++;
        else if (ch == ' ') space++;
        else if (ch >= '0' && ch <= '9') digit++;
        else other++;
    }
    printf("字母：%d，空格：%d，数字：%d，其他：%d\n", letter, space, digit, other);
    return 0;
}