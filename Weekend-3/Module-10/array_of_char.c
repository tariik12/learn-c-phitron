#include<stdio.h>

int main()
{
   int a;
   scanf("%d", &a);
   char ar[a];
   printf("%d\n", sizeof(a));
   int sz = sizeof(a)/sizeof(char);
   printf("sz %d\n", sz);
   for (int i=0; i<a; i++){
    scanf("%c", &ar[i]);
   }
int n=5;
int kz = sizeof(a)/sizeof(int);
printf("n %d", sizeof(kz));
   for(int i=0; i<a; i++){
    printf("%c", ar[i]);
   }
    return 0;
}