#include<stdio.h>
#include<string.h>

int main()
{
   char a[100];
//    specific prints
   fgets(a, 17, stdin);
//    use null
   a[5]='\0';
   printf("%s", a);
    return 0;
}