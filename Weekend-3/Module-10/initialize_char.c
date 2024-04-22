#include<stdio.h>

int main()
{
    // initialize
   char a[5]={'a','b','c','d'};
char a[6] = "Tarik";
   for(int i=0; i<5;i++){
    printf("%c\n", a[i]);
   }
int sz = sizeof(a)/sizeof(char);
printf("%d", sz);
//    for sting print s
printf("%s",a);
    return 0;
}