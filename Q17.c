#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle");
    scanf("%d %d %d",&a,&b,&c);
    if(((a+b)<=c)||((c+b)<=a)||((a+c)<=b))
      printf("The entered sides are invalid sides for a triangle");
      else
      printf("The entered sides are valid sides for a triangle");
      return 0;
}