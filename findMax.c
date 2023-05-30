#include <stdio.h>
int compare(char[]);
int main()
{
    char numbers[15];
    printf("Enter a series of numbers each seperated by a comma (max 15). For example, 3,1,8,5,2,9: \n");
    scanf("%s", &numbers);
    int maximum = compare(numbers);
    printf("The max number is: %d", maximum);
}
int compare(char numbs[])
{
    int max = 0;
    int length = (sizeof numbs / sizeof numbs[0]);
    printf("%d", length);
    for (int i = 0; i < length; i++)
    {
        if (numbs[i] > max)
        {
            max = numbs[i];
        }
    }
    return max;
}