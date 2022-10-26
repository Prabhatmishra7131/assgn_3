#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no:");
    scanf("%d", &n);

    if ((n % 7 == 0))
    {
        printf("The no is divisible by 7");
    }
    else if (n % 3 == 0)
        printf("The no is divisible by 3");

    else
        printf("No. is not divisible by either of them");
    return 0;
}