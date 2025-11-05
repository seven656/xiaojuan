#include <stdio.h>

int main() {
    int day = 10;
    int count = 1; 
    for (int i = day - 1; i >= 1; i--) {
        count = (count + 1) * 2;
    }
    printf("妈妈总共买了%d块巧克力\n", count);
    return 0;
}