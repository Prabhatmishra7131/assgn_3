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
    else
        printf("Entered char is not a char");
    return 0;
}