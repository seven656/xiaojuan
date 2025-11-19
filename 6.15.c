#include <stdio.h>

#define N 3
void transpose(int a[][N], int res[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res[j][i] = a[i][j];
        }
    }
}

int main() {
    int arr[N][N] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int trans[N][N];
    
    transpose(arr, trans);
    
    printf("转置后的数组：\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}