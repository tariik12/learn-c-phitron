#include<stdio.h>

int main()
{
   int text;
   scanf("%d", &text);
   for (int i=1; i<=text;i++){
    int n;
   scanf("%d", &n);
   do
   {
    printf("%d ",n%10);
    n=n/10;
   } while (n!=0);
   
   printf("\n");
   }
    return 0;
}