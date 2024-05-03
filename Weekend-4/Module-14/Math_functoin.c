#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
   double a;
   scanf("%lf", &a);
   //building function ceil provide next int digit like 7.8 ==8
   int ans = ceil(a);
   //building function floor provide before int digit like 7.8 ==7
   int ans_floor = floor(a);
   //building function round if the number is <=.5 will be print next int digit and if >.5 print will be before int digit like 7.6 ==8 or 7.2 ==7
   int ans_round = round(a);
   //building function sqrt to root function
   int ans_sqrt = sqrt(a);
   printf("%d\n",ans);
   printf("%d\n", ans_floor);
   printf("%d\n", ans_round);
   printf("%d\n", ans_sqrt);

// negative will be plush
   int ans_abs = abs(a);
   printf("%d",ans_abs);
    return 0;
}