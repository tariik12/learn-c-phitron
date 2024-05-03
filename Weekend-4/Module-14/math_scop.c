#include<stdio.h>
//global scop
int x=500

// start block scop 
int fun(void){
int s=100;
printf("%p\n", &s);
}
// start local scop
int main()
{
   int s=200;
   fun();
   printf("%p",&s);
    return 0;
}