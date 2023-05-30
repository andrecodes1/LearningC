#include <stdio.h>
int main()
{
    int number;
    int sum = 0;
    printf("Please enter a number n for which you want the sums of the numbers 1 to n calculated: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
        sum = sum + i;
    printf("The sum is %d", sum);
}