 #include <stdio.h>
int main()
{
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    if((n%2==0)&&(n%3==0))
    printf("The no is divisible by 2 and 3");
    else
    printf("The no is not divisible by 2 and 3");
    return 0;

}