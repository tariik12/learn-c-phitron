#include<stdio.h>
#include<string.h>

int main() {
   char a[10];
   char b[20];
   scanf("%s %s", a, b); // Read two strings separated by space

   int arLength = strlen(a);
   int brLength = strlen(b);

   printf("Length of the first string: %d\n", arLength);
   printf("Length of the second string: %d\n", brLength);

   return 0;
}
