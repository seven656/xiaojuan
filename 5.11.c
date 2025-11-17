#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], b[20], temp[20];  
    int c, d;
    gets(a);  
    gets(b);
    printf("a=%s,b=%s\n", a, b);
    c = strlen(a);
    d = strlen(b);
    if (c > d) {
        strcpy(temp, a);  
        strcpy(a, b);
        strcpy(b, temp);
    }
    printf("a=%s,b=%s\n", a, b);
    return 0;
}