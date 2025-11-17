#include <stdio.h>
#include <string.h>
void reverseStr(char arr[]) {
    int len = strlen(arr);
    for (int i = 0; i < len/2; i++) {
        char temp = arr[i];
        arr[i] = arr[len-1 -i];
        arr[len-1 -i] = temp;
    }
}
int main() {
    char a[] = "apple";
    reverseStr(a);
    printf("%s\n", a);  
    return 0;
}