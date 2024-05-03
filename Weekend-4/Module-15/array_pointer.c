#include<stdio.h>

int main()
{
   int ar[6]={5,12,14,12, 50, 42};
   printf("ar of zero index address %p\n", &ar[0]);
//    printf("ar of zero index value %p\n", &ar[1]);
   printf("ar of zero index address %p \n ", &ar);



   printf("ar of zero index value %d \n ", ar[0]);
   //dreferance
   printf("ar of zero index value %d \n ", *ar);

   printf("value of first index %d\n",ar[1]);
   printf("value of first index %d\n",*(ar+1));
    printf("%d\n", *(ar+4));

    // ar[1]= *(1+ar) same
    // *(1+ar)=ar[1];
    // *(1+ar)=ar[1]/1[ar]
    return 0;

}