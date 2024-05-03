// #include<stdio.h>
// void fun(int *ar, int n){

//     ar[4]=600;
//     for(int i=0; i<n; i++){
//     printf("%d ", ar[i]);
//    }
//     printf("\n");
// }

// int main()
// {
//    int ar[5] = {25,12,145,12,23,};
//     fun(ar, 5);
//    for(int i=0; i<5; i++){
//     printf("%d ", ar[i]);
//    }
  
//     return 0;
// }
#include<stdio.h>
#include<string.h>
void fun(char *ar){

    ar[4]='h';
    for(int i=0; i<strlen(ar); i++){
    printf("%c", ar[i]);
   }
    printf("\n");
}

int main()
{
  char ar[] = "hello";
    fun(ar);
   for(int i=0; i<5; i++){
    printf("%c", ar[i]);
   }
  
    return 0;
}