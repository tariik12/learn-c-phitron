#include<stdio.h>
void fun(int* p){
printf("Value of P - %p\n", p);
printf("Value of main x - %d\n", *p);
*p=500;
}
int main()
{
    int x=100;
    printf("Address of X - %p\n", &x);
   fun(&x);
    printf("now Address of X - %d\n", x);
    return 0;
}