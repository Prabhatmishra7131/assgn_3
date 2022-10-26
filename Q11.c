#include <stdio.h>
int main()
{
    float a,b,c,d,e,r;
    printf("Enter marks of the 5 subjects");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    
    if((a>=33&&a<=100)&&(b>=33&&b<=100)&&(c>=33&&c<=100)&&(d>=33&&d<=100)&&(e>=33&&e<=100))
    printf("The student is passed\n");
    else
    printf("Student has failed");
    return 0;

}