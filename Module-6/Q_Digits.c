#include<stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   do
   {
    printf("%d",n%10);
    n=n/10;
   } while (n!=0);
   
    return 0;
}