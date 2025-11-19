#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countRepeatChars(char str[]) {
    int count[128] = {0}; 
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        count[(unsigned char)str[i]]++;
    }
    
    printf("重复字符及次数：\n");
    for (int i = 0; i < 128; i++) {
        if (count[i] >= 2) {
            printf("%c: %d次\n", i, count[i]);
        }
    }
}

int main() {
    char input[100];
    printf("输入字符串：");
    gets(input); 
    countRepeatChars(input);
    return 0;
}