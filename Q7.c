#include <stdio.h>

int main()
{
    int a,b,c;
    float d;
    printf("Enter the co-efficients");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-4*a*c;
    if(d>0)
    printf("Roots are real and distinct");
    else if (d==0)
    {
      printf("Roots are real and equal");
    }
    else
    printf("Roots are imaginary");
    return 0;
    
}