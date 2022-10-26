#include <stdio.h>
int main()
    {int c, s;
     float p, l;
     printf("Enter the cost price and selling price respectively");
     scanf("%d %d", &c, &s);
     if (s > c) {
         p = ((s - c) / c) * 100;
         printf("Profit percentage is %f", p);
     } else if (c > s) {
         l = ((c - s) / s) * 100;
         printf("loss percentage is %f", l);
     }
         else if (c==s)
         {
            printf("Profit percentage is %d", 0);
         }
         
      return 0;

}