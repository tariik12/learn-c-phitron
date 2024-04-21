#include<stdio.h>

int main()
{
   int a;
   scanf("%d", &a);
   int ar[a+1];
   for(int i=0; i<a; i++){
    scanf("%d", &ar[i]);
   }
   int ind, val;
   scanf("%d %d", &ind, &val);
   for(int i=a; i>=ind+1; i--){
    ar[i]= ar[i-1];
   }

   ar[ind]= val;
   for(int i=0; i<=a; i++){
    printf("%d ", ar[i]);
   }
    return 0;
}