#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    if((n>99)&&(n<1000))
    printf("The number entered is a 3 digit no\n");
    else
    printf("Not a 3 digit no");
    return 0;
}