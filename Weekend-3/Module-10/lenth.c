// for practice how to find array length ? 
// We can use three type method.

// Method number-1

#include<stdio.h>

int main()
{
   char a[100];
   scanf("%s", &a);
   int count=0;
   for(int i=0; a[i]!='\\'; i++){
count++;
   }
   printf("%d", count);
    return 0;
}

//Method-2***********

// #include<stdio.h>

// int main()
// {
//    char a[100];
//    scanf("%s", &a);
//    int count=0;
//    int i=0;
//    while ( a[i]!='\0')
//    {
// i++; 
// count++;
//    }
//    printf("%d", count);
//     return 0;
// }

// Method-3**********problem

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char a[100];
//    scanf("%s", a);
//   int sr=strlen(a);
//    printf("%d", a);
//     return 0;
// }