#include <stdio.h>
#define PI 3.1415926
int main()
{
    int r=5;
    double perimeter =2*PI*r;
    double area =PI*r*r;
    printf("perimeter=%.3f\nArea=%.3f\n",perimeter,area);
    return 0;
}