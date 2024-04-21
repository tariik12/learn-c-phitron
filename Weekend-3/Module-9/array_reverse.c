#include<stdio.h>

int main()
{
   int a;
   scanf("%d", &a);
   int ar[a];
for(int i=0; i<a; i++){
    scanf("%d", &ar[i]);
}

   int i=0, j=a-1;
   while (a< j)
   {
int tem=ar[i];
ar[i]=ar[j];
ar[j]=tem;
i++;
j--;
   }
   

   for(int i=0; i<a; i++){
    printf("%d ", ar[i]);
   }
    return 0;
}