#include <stdio.h>

int isQualified(int num) {
    int tens = num / 10;  
    int units = num % 10；
    return (num % 3 == 0) && (tens == 5 || units == 5);
}

int main() {
    printf("符合条件的两位数：");
    for (int i = 10; i <= 99; i++) {
        if (isQualified(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}