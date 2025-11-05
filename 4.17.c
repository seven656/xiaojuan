#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("输入一个充分大的偶数：");
    scanf("%d", &n);

    if (n < 4 || n % 2 != 0) {
        printf("请输入≥4的偶数\n");
        return 1;
    }
    printf("%d可以表示为：\n", n);
    for (int i = 2; i <= n / 2; i++) {
        if (is_prime(i) && is_prime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
        }
    }
    return 0;
}