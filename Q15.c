#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no:");
    scanf("%d", &n);
    if (n > 0)
        printf("No. is positive");
    else if (n < 0)
    {
        printf("No. is negative");
    }
    else
        printf("The no. is zero");
    return 0;
}