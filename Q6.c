#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the 2 numbers");
    scanf("%d %d", &n, &m);
    if (n > m)
        printf("Larger of the 2 is %d", n);
    else if (m > n)
    {
        printf("Larger of the two is %d", m);
    }
    else
        printf("Both the no are equal being %d", n);
    return 0;
}