

#include<stdio.h>
#include<string.h>

int main()
{
// variable declare
   char a[100],b[100];
   // input from user
   scanf("%s %s", a,b);

   // start compare string----------------
// //    while loop
//    int i=0;
//    while (1)
//    {
//     if(a[i]=='\0' && b[i]=='\0'){
//         printf("%s & %s is qual ", a , b);
//         break;
//     }
//     else if (a[i]=='\0')
//     {
//         printf("%s > %s", a, b);
//         break;
//     }else if (b[i]=='\0')
//     {
//         printf("%s < %s", a, b);
//         break;
//     }

//     if(a[i]==b[i]){
//         i++;
//     }
//     else if (a[i]<b[i])
//     {
//         printf("%s < %s", a, b);
//         break;
//     }
//     else{
//         printf("%s > %s", a, b);
//         break;
//     }
    
//    }
// end compare string--------------
//    start compare string by strcmp
int v = strcmp(a,b);
if(v=0){
    printf("The number is similar");
}
else if (a>0)
{
    printf("a is smaller");
}
printf("b is smaller");
//    end compare string by strcmp

    return 0;
}


