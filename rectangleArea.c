#include <stdio.h>

int area(int, int);

int main()
{
    int l;
    int w;
    printf("Please enter the length of the rectangle for which you want to calculate the area: ");
    scanf("%d", &l);
    printf("Please enter the width of the rectangle for which you want to calculate the area: ");
    scanf("%d", &w);
    int a = area(l, w);
    printf("%d", a);
    return 0;
}

int area(int length, int width)
{
    return (length * width);
}
