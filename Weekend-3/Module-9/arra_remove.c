#include<stdio.h>

int main()
{
   int a;
   scanf("%d", &a);
   int ar[a+1];
   for(int i=0; i<a; i++){
    scanf("%d", &ar[i]);
   }
   
   int pos;
   scanf("%d", &pos);
   for(int i=pos; i<=a; i++){
    ar[i]= ar[i+1];
   }

   for(int i=0; i<a-1; i++){
    printf("%d ", ar[i]);
   }
    return 0;
}