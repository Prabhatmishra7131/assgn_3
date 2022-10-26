#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c", &ch);
    if ((97<=ch) && (ch <= 122))
        printf("Entered char is a lower case char");
    else if ((65<=ch) && (ch <= 90))
    {
        printf("Entered char is an upper case char");
    }
    else if((0<=ch)&&(ch<=9))
        printf("Entered char is a digit");
        else
        printf("Entered cchar is a special char");
    return 0;
}