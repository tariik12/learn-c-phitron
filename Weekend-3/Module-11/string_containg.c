#include<stdio.h>
#include<string.h>
int main()
{
   char a[200], b[100];
   scanf("%s %s", a,b);
   //start string concat manually-----------
//    int k=strlen(a);
//    for(int i =0; i<= strlen(b); i++){
// a[k]=b[i];
// k++;
//    }
    //end string concat manually-----------------

   //strcat string concat strcat
   strcat(a,b);
   //end string concat strcat

   printf("%s %s", a, b);
    return 0;
}