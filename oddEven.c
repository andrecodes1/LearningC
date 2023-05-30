#include <stdio.h>
void check(int);
int main()
{
    int a;
    printf("Please enter the number you wish to check: ");
    scanf("%d", &a);
    check(a);
}
void check(int a)
{
    if (a % 2 == 0)
    {
        printf("The entered number is even. ");
    }
    else
    {
        printf("The entered number is odd. ");
    }
}