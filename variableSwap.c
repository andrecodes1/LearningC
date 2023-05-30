#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a;
    int b;
    printf("Please enter a value for the variable a: ");
    scanf("%d", &a);
    printf("Please enter a value for the variable b: ");
    scanf("%d", &b);
    swap(&a, &b);

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Value a is now %d and value b is now %d\n", *x, *y);
}
