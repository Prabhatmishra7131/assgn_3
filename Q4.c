#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no\n");
    scanf("%d",&n);
    if ((n&1==0))
    {
       printf("The no is even");
    }
    else
    printf("The no is odd");
    return 0;
}