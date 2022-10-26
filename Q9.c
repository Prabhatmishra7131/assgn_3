#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three nos:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("Largest among the three is %d",a);
    else if ((b>a)&&(b>c))
    {
        printf("Largest among the three is %d",b);
    }
    else if ((c>a)&&(c>b))
    {
       printf("Largest among the three is %d",c);
    }
    return 0;
}