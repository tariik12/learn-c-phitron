#include<stdio.h>

int main()
{
   
int i;
    for ( i = 1; i <= 10; i++)
    {
      if(i%2==0){

       printf("%dEven\n", i);
       if(i==6) break;
      }
      else{
        printf("%dOdd\n", i);
      }
        
    }

    return 0;
}