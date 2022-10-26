#include<stdio.h>
int main()
{
    int mn;
    printf("Enter the month number:");
    scanf("%d",&mn);
    if(mn==1||mn==3||mn==5||mn==7||mn==8||mn==10)
    printf("This month has 31 days");
    else if (mn==4||mn==6||mn==9||mn==11)
    {
        printf("This month has 30 days");
    }
    else if (mn==2)
    {
        printf("This month has either 28 or 29 days");
    }
    
    return 0;
}