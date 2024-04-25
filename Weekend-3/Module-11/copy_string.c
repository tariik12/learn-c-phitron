#include<stdio.h>
#include<string.h>

int main()
{
   char a[100] , b[100];
   scanf("%s %s", a,b);
//start  string copy manually----------------------

// char d[100];
//    for (int i=0; i<=strlen(b);i++){
//     d[i]=a[i];
//     a[i]=b[i];
//    }

//    for (int i=0; i<=strlen(d);i++){
    
//     b[i]=d[i];
//    }

// end string copy manually-------------------

//start Copy the strings using by strcpy  ///-----TODO
char d[100];
strcpy(a,b);
// strcpy(d,a);
// strcpy(a,d);
// end copy the stings using  strcpy
   printf("%s %s", a, b);
    return 0;
}