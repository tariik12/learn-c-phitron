#include<stdio.h>
#include<string.h>
void fun(char ar[]){
    printf("%d\n", strlen(ar));
    for(int i=0; i<strlen(ar); i++){
        printf("%c", ar[i]);
    }
}
int main()
{
   char ar[20]="hello";
   fun(ar);
    return 0;
}